/* Generated by re2c */
#line 1 "bug1297658.re"
// re2c $INPUT -o $OUTPUT 
#include <string.h>
#include <stdlib.h>
#include <iostream>

struct Scanner
{
	Scanner(char *_inp)
		: inp(_inp), buf(NULL), ptr(NULL), len(0), siz(strlen(_inp)), line(0)
	{
		fill(0);
		cur = buf;
	}
	
	void fill(size_t n)
	{
		n++;
		buf = (char*)realloc(buf, len + n + 1);
		if ((len += n) > siz)
		{
			len = siz;
		}
		memcpy(buf, inp, len);
		buf[len] = '\0';
		lim = buf + len;
		eof = buf + siz - 1;
	}

	char    *inp;
	char    *cur;
	char    *buf;
	char    *ptr;
	char    *lim;
	char    *eof;
	size_t  len;
	size_t  siz;
	size_t  line;
};

enum What
{
	UNEXPECTED,
	FCON,
	EOI
};

#define	YYCTYPE		char
#define	YYCURSOR	s.cur
#define	YYLIMIT		s.lim
#define	YYMARKER	s.ptr
#define	YYFILL(n)	s.fill(n)
#define RET(n)      return (n)

int scan(Scanner &s)
{
std:


#line 62 "bug1297658.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy3;
		case '.': goto yy4;
		case '0': goto yy6;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 75 "bug1297658.re"
	{
		RET(UNEXPECTED);
	}
#line 80 "bug1297658.c"
yy3:
	++YYCURSOR;
#line 67 "bug1297658.re"
	{
		s.line++;
		if(1||s.cur == s.eof) RET(EOI);
		goto std;
	}
#line 89 "bug1297658.c"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'L': goto yy7;
		case 'e': goto yy8;
		default: goto yy5;
	}
yy5:
#line 62 "bug1297658.re"
	{
		RET(FCON);
	}
#line 102 "bug1297658.c"
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '.': goto yy4;
		case '0': goto yy9;
		default: goto yy2;
	}
yy7:
	++YYCURSOR;
	goto yy5;
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'L': goto yy7;
		default: goto yy5;
	}
yy9:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case '.': goto yy4;
		case '0': goto yy9;
		default: goto yy10;
	}
yy10:
	YYCURSOR = YYMARKER;
	goto yy2;
}
#line 78 "bug1297658.re"

}

int main(int,char**)
{
	Scanner s("\n0.eL\n00.eL\n");
	
	std::cout << "RES(2): " << scan(s) << std::endl;
	std::cout << "RES(1): " << scan(s) << std::endl;
	std::cout << "RES(2): " << scan(s) << std::endl;
	std::cout << "RES(1): " << scan(s) << std::endl;
	std::cout << "RES(2): " << scan(s) << std::endl;
	std::cout << "RES(0): " << scan(s) << std::endl;
}