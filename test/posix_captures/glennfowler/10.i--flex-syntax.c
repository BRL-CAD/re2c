/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR;
	if (yych >= 0x01) goto yy3;
yy2:
	yynmatch = 2;
	yypmatch[0] = yypmatch[2] = yyt1;
	yypmatch[1] = yypmatch[3] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy2;
	++YYCURSOR;
	goto yy2;
}

posix_captures/glennfowler/10.i--flex-syntax.re:5:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/10.i--flex-syntax.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/10.i--flex-syntax.re:6:7: warning: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
