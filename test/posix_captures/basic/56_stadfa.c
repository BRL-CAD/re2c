/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 0x00: goto yy1;
		case 'c': goto yy4;
		default: goto yy2;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy3;
		case 'c': goto yy7;
		default: goto yy6;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 0x00:
			yyt2 = YYCURSOR;
			goto yy5;
		case 'c': goto yy7;
		default: goto yy8;
	}
yy5:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2 - 1;
	yypmatch[5] = YYCURSOR;
	{}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy3;
		case 'c': goto yy7;
		default: goto yy6;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00:
			yyt2 = YYCURSOR;
			goto yy5;
		case 'c': goto yy7;
		default: goto yy8;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy5;
		case 'c': goto yy7;
		default: goto yy9;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy5;
		case 'c': goto yy7;
		default: goto yy9;
	}
}

posix_captures/basic/56_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]