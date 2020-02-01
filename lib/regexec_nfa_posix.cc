#include <stdio.h>
#include <algorithm>
#include <utility>
#include <vector>
#include <assert.h>

#include "lib/regex.h"
#include "lib/regex_impl.h"
#include "src/debug/debug.h"
#include "src/dfa/closure_posix.h"
#include "src/dfa/posix_precedence.h"
#include "src/dfa/tag_history.h"
#include "src/nfa/nfa.h"
#include "src/regexp/rule.h"
#include "src/util/range.h"


namespace re2c {
namespace libre2c {

static void make_one_step(psimctx_t &, uint32_t);
static void make_final_step(psimctx_t &);

// we *do* want these to be inlined
static inline void closure_posix(psimctx_t &ctx);

int regexec_nfa_posix(const regex_t *preg, const char *string
    , size_t nmatch, regmatch_t pmatch[], int /* eflags */)
{
    psimctx_t &ctx = *static_cast<psimctx_t*>(preg->simctx);
    init(ctx, string);

    // root state can be non-core, so we pass zero as origin to avoid checks
    const conf_t c0(ctx.nfa.root, 0, HROOT);
    ctx.reach.push_back(c0);
    for (;;) {
        closure_posix(ctx);
        const uint32_t sym = static_cast<uint8_t>(*ctx.cursor++);
        if (ctx.state.empty() || sym == 0) break;
        make_one_step(ctx, sym);
    }
    make_final_step(ctx);

    if (ctx.rule == Rule::NONE) {
        return REG_NOMATCH;
    }

    const std::vector<Tag> &tags = ctx.nfa.tags;
    const size_t ntags = tags.size();
    regmatch_t *m = pmatch, *e = pmatch + nmatch;

    m->rm_so = 0;
    m->rm_eo = ctx.marker - string - 1;
    ++m;

    for (size_t t = 0; t < ntags && m < e; t += 2) {
        const Tag &tag = tags[t];
        if (!fictive(tag)) {
            const regoff_t so = ctx.offsets3[t];
            const regoff_t eo = ctx.offsets3[t + 1];

            for (size_t j = tag.lsub; j <= tag.hsub && m < e; j += 2, ++m) {
                DASSERT(m - 1 == &pmatch[j / 2]);
                m->rm_so = so;
                m->rm_eo = eo;
            }
        }
    }

    return 0;
}

void closure_posix(psimctx_t &ctx)
{
    ctx.history.init();

    if (ctx.flags & REG_GTOP) {
        closure_posix_gtop(ctx);
    }
    else {
        closure_posix_gor1(ctx);
    }
}

void make_one_step(psimctx_t &ctx, uint32_t sym)
{
    confset_t &state = ctx.state, &reach = ctx.reach;
    uint32_t j = 0;
    reach.clear();

    for (cconfiter_t i = state.begin(), e = state.end(); i != e; ++i) {
        nfa_state_t *s = i->state;

        s->clos = NOCLOS;
        s->arcidx = 0;
        DASSERT(s->status == GOR_NOPASS && s->active == 0);

        if (s->type == nfa_state_t::RAN) {
            for (const Range *r = s->ran.ran; r; r = r->next()) {
                if (r->lower() <= sym && sym < r->upper()) {
                    const conf_t c(s->ran.out, j, HROOT);
                    reach.push_back(c);
                    state[j] = *i;
                    update_offsets(ctx, *i, j);
                    ++j;
                    break;
                }
            }
        }
        else if (s->type == nfa_state_t::FIN) {
            update_offsets(ctx, *i, NONCORE);
        }
    }

    state.resize(j);
    std::swap(ctx.offsets1, ctx.offsets2);

    if (!(ctx.flags & REG_SLOWPREC)) {
        compute_prectable_complex(ctx);
    }
    else {
        compute_prectable_naive(ctx);
    }
    std::swap(ctx.newprectbl, ctx.oldprectbl);
    ctx.oldprecdim = j;

    ctx.history.init();
    ++ctx.step;
}

void make_final_step(psimctx_t &ctx)
{
    for (cconfiter_t i = ctx.state.begin(), e = ctx.state.end(); i != e; ++i) {
        nfa_state_t *s = i->state;

        s->clos = NOCLOS;
        s->arcidx = 0;
        DASSERT(s->status == GOR_NOPASS && s->active == 0);

        if (s->type == nfa_state_t::FIN) {
            update_offsets(ctx, *i, NONCORE);
        }
    }
}

} // namespace libre2c
} // namespace re2c

