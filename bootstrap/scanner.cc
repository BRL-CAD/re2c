/* Generated by re2c 0.9.2 on Wed May 12 21:46:34 2004 */
#line 1 "scanner.re"
/* $Id$ */
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "scanner.h"
#include "parser.h"
#include "y.tab.h"

extern YYSTYPE yylval;

#ifndef MAX
#define MAX(a,b) (((a)>(b))?(a):(b))
#endif

#define	BSIZE	8192

#define	YYCTYPE		char
#define	YYCURSOR	cursor
#define	YYLIMIT		lim
#define	YYMARKER	ptr
#define	YYFILL(n)	{cursor = fill(cursor);}

#define	RETURN(i)	{cur = cursor; return i;}


Scanner::Scanner(std::istream& i) : in(i),
	bot(NULL), tok(NULL), ptr(NULL), cur(NULL), pos(NULL), lim(NULL),
	top(NULL), eof(NULL), tchar(0), tline(0), cline(1) {
    ;
}

char *Scanner::fill(char *cursor){
    if(!eof){
	uint cnt = tok - bot;
	if(cnt){
	    memcpy(bot, tok, lim - tok);
	    tok = bot;
	    ptr -= cnt;
	    cursor -= cnt;
	    pos -= cnt;
	    lim -= cnt;
	}
	if((top - lim) < BSIZE){
	    char *buf = new char[(lim - bot) + BSIZE];
	    memcpy(buf, tok, lim - tok);
	    tok = buf;
	    ptr = &buf[ptr - bot];
	    cursor = &buf[cursor - bot];
	    pos = &buf[pos - bot];
	    lim = &buf[lim - bot];
	    top = &lim[BSIZE];
	    delete [] bot;
	    bot = buf;
	}
	if((cnt = in.rdbuf()->sgetn((char*) lim, BSIZE)) != BSIZE){
	    eof = &lim[cnt]; *eof++ = '\n';
	}
	lim += cnt;
    }
    return cursor;
}

#line 72 "scanner.re"


int Scanner::echo(std::ostream &out){
    char *cursor = cur;

    // Catch EOF
    if (eof && cursor == eof)
    	return 0;

    tok = cursor;
echo:

#line 7 "scanner.cc"
{
	YYCTYPE yych;
	unsigned int yyaccept;
	goto yy0;
yy1:	++YYCURSOR;
yy0:
	if((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
	yych = *YYCURSOR;
	if(yych == '\n')	goto yy4;
	if(yych != '/')	goto yy6;
	goto yy2;
yy2:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == '*')	goto yy7;
	goto yy3;
yy3:
#line 91 "scanner.re"
{ goto echo; }
#line 26 "scanner.cc"
yy4:	++YYCURSOR;
	goto yy5;
yy5:
#line 87 "scanner.re"
{ if(cursor == eof) RETURN(0);
				  out.write((const char*)(tok), (const char*)(cursor) - (const char*)(tok));
				  tok = pos = cursor; cline++;
				  goto echo; }
#line 35 "scanner.cc"
yy6:	yych = *++YYCURSOR;
	goto yy3;
yy7:	yych = *++YYCURSOR;
	if(yych == '!')	goto yy9;
	goto yy8;
yy8:	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy3;
	}
yy9:	yych = *++YYCURSOR;
	if(yych != 'r')	goto yy8;
	goto yy10;
yy10:	yych = *++YYCURSOR;
	if(yych != 'e')	goto yy8;
	goto yy11;
yy11:	yych = *++YYCURSOR;
	if(yych != '2')	goto yy8;
	goto yy12;
yy12:	yych = *++YYCURSOR;
	if(yych != 'c')	goto yy8;
	goto yy13;
yy13:	++YYCURSOR;
	goto yy14;
yy14:
#line 84 "scanner.re"
{ out.write((const char*)(tok), (const char*)(&cursor[-7]) - (const char*)(tok));
				  tok = cursor;
				  RETURN(1); }
#line 64 "scanner.cc"
}
#line 92 "scanner.re"

}


int Scanner::scan(){
    char *cursor = cur;
    uint depth;

scan:
    tchar = cursor - pos;
    tline = cline;
    tok = cursor;

#line 68 "scanner.cc"
{
	YYCTYPE yych;
	unsigned int yyaccept;
	goto yy15;
yy16:	++YYCURSOR;
yy15:
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if(yych <= '/'){
		if(yych <= '"'){
			if(yych <= '\n'){
				if(yych <= '\b')	goto yy37;
				if(yych <= '\t')	goto yy33;
				goto yy35;
			} else {
				if(yych == ' ')	goto yy33;
				if(yych <= '!')	goto yy37;
				goto yy23;
			}
		} else {
			if(yych <= ')'){
				if(yych <= '&')	goto yy37;
				if(yych <= '\'')	goto yy25;
				goto yy29;
			} else {
				if(yych <= '*')	goto yy21;
				if(yych <= '+')	goto yy30;
				if(yych <= '.')	goto yy37;
				goto yy19;
			}
		}
	} else {
		if(yych <= '@'){
			if(yych <= '<'){
				if(yych == ';')	goto yy29;
				goto yy37;
			} else {
				if(yych <= '=')	goto yy29;
				if(yych == '?')	goto yy30;
				goto yy37;
			}
		} else {
			if(yych <= '`'){
				if(yych <= 'Z')	goto yy31;
				if(yych <= '[')	goto yy27;
				if(yych <= '\\')	goto yy29;
				goto yy37;
			} else {
				if(yych <= 'z')	goto yy31;
				if(yych <= '{')	goto yy17;
				if(yych <= '|')	goto yy29;
				goto yy37;
			}
		}
	}
yy17:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych <= '/')	goto yy18;
	if(yych <= '9')	goto yy63;
	goto yy18;
yy18:
#line 105 "scanner.re"
{ depth = 1;
				  goto code;
				}
#line 134 "scanner.cc"
yy19:	++YYCURSOR;
	if((yych = *YYCURSOR) == '*')	goto yy61;
	goto yy20;
yy20:
#line 131 "scanner.re"
{ RETURN(*tok); }
#line 141 "scanner.cc"
yy21:	++YYCURSOR;
	if((yych = *YYCURSOR) == '/')	goto yy59;
	goto yy22;
yy22:
#line 133 "scanner.re"
{ yylval.op = *tok;
				  RETURN(CLOSE); }
#line 149 "scanner.cc"
yy23:	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych != '\n')	goto yy55;
	goto yy24;
yy24:
#line 122 "scanner.re"
{ fatal("unterminated string constant (missing \")"); }
#line 157 "scanner.cc"
yy25:	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych != '\n')	goto yy50;
	goto yy26;
yy26:
#line 123 "scanner.re"
{ fatal("unterminated string constant (missing ')"); }
#line 165 "scanner.cc"
yy27:	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych != '\n')	goto yy44;
	goto yy28;
yy28:
#line 129 "scanner.re"
{ fatal("unterminated range (missing ])"); }
#line 173 "scanner.cc"
yy29:	yych = *++YYCURSOR;
	goto yy20;
yy30:	yych = *++YYCURSOR;
	goto yy22;
yy31:	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy42;
yy32:
#line 148 "scanner.re"
{ cur = cursor;
				  yylval.symbol = Symbol::find(token());
				  return ID; }
#line 185 "scanner.cc"
yy33:	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy40;
yy34:
#line 152 "scanner.re"
{ goto scan; }
#line 191 "scanner.cc"
yy35:	++YYCURSOR;
	goto yy36;
yy36:
#line 154 "scanner.re"
{ if(cursor == eof) RETURN(0);
				  pos = cursor; cline++;
				  goto scan;
	    			}
#line 200 "scanner.cc"
yy37:	++YYCURSOR;
	goto yy38;
yy38:
#line 159 "scanner.re"
{ std::cerr << "unexpected character: " << *tok << std::endl;
				  goto scan;
				}
#line 208 "scanner.cc"
yy39:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy40;
yy40:	if(yych == '\t')	goto yy39;
	if(yych == ' ')	goto yy39;
	goto yy34;
yy41:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy42;
yy42:	if(yych <= '@'){
		if(yych <= '/')	goto yy32;
		if(yych <= '9')	goto yy41;
		goto yy32;
	} else {
		if(yych <= 'Z')	goto yy41;
		if(yych <= '`')	goto yy32;
		if(yych <= 'z')	goto yy41;
		goto yy32;
	}
yy43:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy44;
yy44:	if(yych <= '['){
		if(yych != '\n')	goto yy43;
		goto yy45;
	} else {
		if(yych <= '\\')	goto yy46;
		if(yych <= ']')	goto yy47;
		goto yy43;
	}
yy45:	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy18;
	case 1:	goto yy24;
	case 2:	goto yy26;
	case 3:	goto yy28;
	}
yy46:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == '\n')	goto yy45;
	goto yy43;
yy47:	++YYCURSOR;
	goto yy48;
yy48:
#line 125 "scanner.re"
{ cur = cursor;
				  yylval.regexp = ranToRE(token());
				  return RANGE; }
#line 265 "scanner.cc"
yy49:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy50;
yy50:	if(yych <= '&'){
		if(yych == '\n')	goto yy45;
		goto yy49;
	} else {
		if(yych <= '\'')	goto yy52;
		if(yych != '\\')	goto yy49;
		goto yy51;
	}
yy51:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == '\n')	goto yy45;
	goto yy49;
yy52:	++YYCURSOR;
	goto yy53;
yy53:
#line 118 "scanner.re"
{ cur = cursor;
				  yylval.regexp = strToCaseInsensitiveRE(token());
				  return STRING; }
#line 292 "scanner.cc"
yy54:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy55;
yy55:	if(yych <= '!'){
		if(yych == '\n')	goto yy45;
		goto yy54;
	} else {
		if(yych <= '"')	goto yy57;
		if(yych != '\\')	goto yy54;
		goto yy56;
	}
yy56:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == '\n')	goto yy45;
	goto yy54;
yy57:	++YYCURSOR;
	goto yy58;
yy58:
#line 114 "scanner.re"
{ cur = cursor;
				  yylval.regexp = strToRE(token());
				  return STRING; }
#line 319 "scanner.cc"
yy59:	++YYCURSOR;
	goto yy60;
yy60:
#line 111 "scanner.re"
{ tok = cursor;
				  RETURN(0); }
#line 326 "scanner.cc"
yy61:	++YYCURSOR;
	goto yy62;
yy62:
#line 108 "scanner.re"
{ depth = 1;
				  goto comment; }
#line 333 "scanner.cc"
yy63:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy64;
yy64:	if(yych <= '/'){
		if(yych == ',')	goto yy67;
		goto yy45;
	} else {
		if(yych <= '9')	goto yy63;
		if(yych != '}')	goto yy45;
		goto yy65;
	}
yy65:	++YYCURSOR;
	goto yy66;
yy66:
#line 136 "scanner.re"
{ yylval.extop.minsize = atoi((char *)tok+1);
				  yylval.extop.maxsize = atoi((char *)tok+1);
				  RETURN(CLOSESIZE); }
#line 354 "scanner.cc"
yy67:	yych = *++YYCURSOR;
	if(yych != '}')	goto yy71;
	goto yy68;
yy68:	++YYCURSOR;
	goto yy69;
yy69:
#line 144 "scanner.re"
{ yylval.extop.minsize = atoi((char *)tok+1);
				  yylval.extop.maxsize = -1;
				  RETURN(CLOSESIZE); }
#line 365 "scanner.cc"
yy70:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy71;
yy71:	if(yych <= '/')	goto yy45;
	if(yych <= '9')	goto yy70;
	if(yych != '}')	goto yy45;
	goto yy72;
yy72:	++YYCURSOR;
	goto yy73;
yy73:
#line 140 "scanner.re"
{ yylval.extop.minsize = atoi((char *)tok+1);
				  yylval.extop.maxsize = MAX(yylval.extop.minsize,atoi(strchr((char *)tok, ',')+1));
				  RETURN(CLOSESIZE); }
#line 382 "scanner.cc"
}
#line 162 "scanner.re"


code:

#line 386 "scanner.cc"
{
	YYCTYPE yych;
	unsigned int yyaccept;
	goto yy74;
yy75:	++YYCURSOR;
yy74:
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if(yych <= '&'){
		if(yych <= '\n'){
			if(yych <= '\t')	goto yy82;
			goto yy80;
		} else {
			if(yych == '"')	goto yy84;
			goto yy82;
		}
	} else {
		if(yych <= '{'){
			if(yych <= '\'')	goto yy85;
			if(yych <= 'z')	goto yy82;
			goto yy78;
		} else {
			if(yych != '}')	goto yy82;
			goto yy76;
		}
	}
yy76:	++YYCURSOR;
	goto yy77;
yy77:
#line 166 "scanner.re"
{ if(--depth == 0){
					cur = cursor;
					yylval.token = new Token(token(), tline);
					return CODE;
				  }
				  goto code; }
#line 423 "scanner.cc"
yy78:	++YYCURSOR;
	goto yy79;
yy79:
#line 172 "scanner.re"
{ ++depth;
				  goto code; }
#line 430 "scanner.cc"
yy80:	++YYCURSOR;
	goto yy81;
yy81:
#line 174 "scanner.re"
{ if(cursor == eof) fatal("missing '}'");
				  pos = cursor; cline++;
				  goto code;
				}
#line 439 "scanner.cc"
yy82:	++YYCURSOR;
	goto yy83;
yy83:
#line 178 "scanner.re"
{ goto code; }
#line 445 "scanner.cc"
yy84:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == '\n')	goto yy83;
	goto yy91;
yy85:	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if(yych == '\n')	goto yy83;
	goto yy87;
yy86:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy87;
yy87:	if(yych <= '&'){
		if(yych != '\n')	goto yy86;
		goto yy88;
	} else {
		if(yych <= '\'')	goto yy82;
		if(yych == '\\')	goto yy89;
		goto yy86;
	}
yy88:	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy83;
	}
yy89:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == '\n')	goto yy88;
	goto yy86;
yy90:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy91;
yy91:	if(yych <= '!'){
		if(yych == '\n')	goto yy88;
		goto yy90;
	} else {
		if(yych <= '"')	goto yy82;
		if(yych != '\\')	goto yy90;
		goto yy92;
	}
yy92:	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych == '\n')	goto yy88;
	goto yy90;
}
#line 179 "scanner.re"


comment:

#line 499 "scanner.cc"
{
	YYCTYPE yych;
	unsigned int yyaccept;
	goto yy93;
yy94:	++YYCURSOR;
yy93:
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if(yych <= ')'){
		if(yych == '\n')	goto yy98;
		goto yy100;
	} else {
		if(yych <= '*')	goto yy95;
		if(yych == '/')	goto yy97;
		goto yy100;
	}
yy95:	++YYCURSOR;
	if((yych = *YYCURSOR) == '/')	goto yy103;
	goto yy96;
yy96:
#line 193 "scanner.re"
{ goto comment; }
#line 522 "scanner.cc"
yy97:	yych = *++YYCURSOR;
	if(yych == '*')	goto yy101;
	goto yy96;
yy98:	++YYCURSOR;
	goto yy99;
yy99:
#line 189 "scanner.re"
{ if(cursor == eof) RETURN(0);
				  tok = pos = cursor; cline++;
				  goto comment;
				}
#line 534 "scanner.cc"
yy100:	yych = *++YYCURSOR;
	goto yy96;
yy101:	++YYCURSOR;
	goto yy102;
yy102:
#line 187 "scanner.re"
{ ++depth;
				  goto comment; }
#line 543 "scanner.cc"
yy103:	++YYCURSOR;
	goto yy104;
yy104:
#line 183 "scanner.re"
{ if(--depth == 0)
					goto scan;
				    else
					goto comment; }
#line 552 "scanner.cc"
}
#line 194 "scanner.re"

}

void Scanner::fatal(char *msg){
    std::cerr << "line " << tline << ", column " << (tchar + 1) << ": "
	<< msg << std::endl;
    exit(1);
}
