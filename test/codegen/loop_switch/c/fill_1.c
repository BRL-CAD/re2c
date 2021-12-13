/* Generated by re2c */
// re2c $INPUT -o $OUTPUT --loop-switch -i
#include <assert.h>
#include <stdio.h>
#include <string.h>

#define SIZE 4096

typedef struct {
    FILE *file;
    char buf[SIZE + 1], *lim, *cur, *mar, *tok;
    int eof;
} Input;

static int fill(Input *in)
{
    if (in->eof) {
        return 1;
    }
    const size_t free = in->tok - in->buf;
    if (free < 1) {
        return 2;
    }
    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    in->lim += fread(in->lim, 1, free, in->file);
    in->lim[0] = 0;
    in->eof |= in->lim < in->buf + SIZE;
    return 0;
}

static void init(Input *in, FILE *file)
{
    in->file = file;
    in->cur = in->mar = in->tok = in->lim = in->buf + SIZE;
    in->eof = 0;
    fill(in);
}

static int lex(Input *in)
{
    int count = 0;
loop:
    in->tok = in->cur;
    
{
	char yych;
	unsigned int yystate = 0;
	for (;;) {
		switch (yystate) {
			case 0:
				yych = *in->cur;
				switch (yych) {
					case ' ':
						++in->cur;
						yystate = 3;
						continue;
					case '\'':
						++in->cur;
						yystate = 6;
						continue;
					default:
						if (in->lim <= in->cur) {
							if (fill(in) == 0) {
								yystate = 0;
								continue;
							}
							yystate = 12;
							continue;
						}
						++in->cur;
						yystate = 1;
						continue;
				}
			case 1:
				yystate = 2;
				continue;
			case 2:
				{ return -1; }
			case 3:
				yych = *in->cur;
				yystate = 4;
				continue;
			case 4:
				switch (yych) {
					case ' ':
						++in->cur;
						yystate = 3;
						continue;
					default:
						if (in->lim <= in->cur) {
							if (fill(in) == 0) {
								yystate = 3;
								continue;
							}
						}
						yystate = 5;
						continue;
				}
			case 5:
				{ goto loop; }
			case 6:
				in->mar = in->cur;
				yych = *in->cur;
				if (yych >= 0x01) {
					yystate = 8;
					continue;
				}
				if (in->lim <= in->cur) {
					if (fill(in) == 0) {
						yystate = 6;
						continue;
					}
					yystate = 2;
					continue;
				}
				++in->cur;
				yystate = 7;
				continue;
			case 7:
				yych = *in->cur;
				yystate = 8;
				continue;
			case 8:
				switch (yych) {
					case '\'':
						++in->cur;
						yystate = 9;
						continue;
					case '\\':
						++in->cur;
						yystate = 11;
						continue;
					default:
						if (in->lim <= in->cur) {
							if (fill(in) == 0) {
								yystate = 7;
								continue;
							}
							yystate = 13;
							continue;
						}
						++in->cur;
						yystate = 7;
						continue;
				}
			case 9:
				yystate = 10;
				continue;
			case 10:
				{ ++count; goto loop; }
			case 11:
				yych = *in->cur;
				if (yych <= 0x00) {
					if (in->lim <= in->cur) {
						if (fill(in) == 0) {
							yystate = 11;
							continue;
						}
						yystate = 13;
						continue;
					}
					++in->cur;
					yystate = 7;
					continue;
				}
				++in->cur;
				yystate = 7;
				continue;
			case 12:
				{ return count; }
			case 13:
				in->cur = in->mar;
				yystate = 2;
				continue;
		}
	}
}

}

int main()
{
    const char *fname = "input";
    const char str[] = "'qu\0tes' 'are' 'fine: \\'' ";
    FILE *f;
    Input in;

    // prepare input file: a few times the size of the buffer,
    // containing strings with zeroes and escaped quotes
    f = fopen(fname, "w");
    for (int i = 0; i < SIZE; ++i) {
        fwrite(str, 1, sizeof(str) - 1, f);
    }
    fclose(f);

    f = fopen(fname, "r");
    init(&in, f);
    assert(lex(&in) == SIZE * 3);
    fclose(f);

    remove(fname);
    return 0;
}