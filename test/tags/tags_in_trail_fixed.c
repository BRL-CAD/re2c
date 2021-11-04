/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags

// fixed trailing context, fixed tags p and q

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{}
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'b':	goto yy5;
	default:	goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy8;
	default:	goto yy6;
	}
yy8:
	++YYCURSOR;
	p = YYCURSOR - 4;
	q = YYCURSOR - 2;
	YYCURSOR -= 3;
	{}
}


// variable trailing context, fixed tags p and q

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy14;
	default:	goto yy12;
	}
yy12:
	++YYCURSOR;
yy13:
	{}
yy14:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'b':
		yyt1 = YYCURSOR;
		goto yy15;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy17;
	default:	goto yy13;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy17;
	default:	goto yy16;
	}
yy16:
	YYCURSOR = YYMARKER;
	goto yy13;
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy18;
	default:	goto yy16;
	}
yy18:
	++YYCURSOR;
	p = yyt1 - 1;
	q = YYCURSOR - 2;
	YYCURSOR = yyt1;
	{}
}

