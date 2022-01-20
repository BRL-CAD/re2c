/* Generated by re2c */
#line 1 "c/submatch/03_posix.re"
// re2c $INPUT -o $OUTPUT
#include <assert.h>
#include <stddef.h>

// Maximum number of capturing groups among all rules.
#line 9 "c/submatch/03_posix.c"
#define YYMAXNMATCH 4
#line 6 "c/submatch/03_posix.re"


struct SemVer { int major, minor, patch; };

static int s2n(const char *s, const char *e) { // pre-parsed string to number
    int n = 0;
    for (; s < e; ++s) n = n * 10 + (*s - '0');
    return n;
}

static bool lex(const char *str, SemVer &ver) {
    const char *YYCURSOR = str, *YYMARKER;

    // Allocate memory for capturing parentheses (twice the number of groups).
    const char *yypmatch[YYMAXNMATCH * 2];
    size_t yynmatch;

    // Autogenerated tag variables used by the lexer to track tag values.
    
#line 31 "c/submatch/03_posix.c"
const char *yyt1;
const char *yyt2;
const char *yyt3;
const char *yyt4;
const char *yyt5;
#line 24 "c/submatch/03_posix.re"


    
#line 41 "c/submatch/03_posix.c"
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			yyt1 = YYCURSOR;
			goto yy3;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 43 "c/submatch/03_posix.re"
	{ return false; }
#line 65 "c/submatch/03_posix.c"
yy3:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '.': goto yy4;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy6;
		default: goto yy2;
	}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			yyt2 = YYCURSOR;
			goto yy7;
		default: goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	goto yy2;
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case '.': goto yy4;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy6;
		default: goto yy5;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00:
			yyt4 = yyt5 = NULL;
			yyt3 = YYCURSOR;
			goto yy8;
		case '.':
			yyt3 = yyt5 = YYCURSOR;
			goto yy9;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy7;
		default: goto yy5;
	}
yy8:
	++YYCURSOR;
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[6] = yyt5;
	yypmatch[7] = yyt4;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2 - 1;
#line 33 "c/submatch/03_posix.re"
	{
            // `yynmatch` is the number of capturing groups
            assert(yynmatch == 4);
            // Even `yypmatch` values are for opening parentheses, odd values
            // are for closing parentheses, the first group is the whole match.
            ver.major = s2n(yypmatch[2], yypmatch[3]);
            ver.minor = s2n(yypmatch[4], yypmatch[5]);
            ver.patch = yypmatch[6] ? s2n(yypmatch[6] + 1, yypmatch[7]) : 0;
            return true;
        }
#line 162 "c/submatch/03_posix.c"
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy5;
	goto yy11;
yy10:
	yych = *++YYCURSOR;
yy11:
	switch (yych) {
		case 0x00:
			yyt4 = YYCURSOR;
			goto yy8;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy10;
		default: goto yy5;
	}
}
#line 44 "c/submatch/03_posix.re"

}

int main() {
    SemVer v;
    assert(lex("23.34", v) && v.major == 23 && v.minor == 34 && v.patch == 0);
    assert(lex("1.2.999", v) && v.major == 1 && v.minor == 2 && v.patch == 999);
    assert(!lex("1.a", v));
    return 0;
}