/* Generated by re2c */

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycx: goto yyc_x;
	case yycy: goto yyc_y;
	}
/* *********************************** */
yyc_x:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
	{}
yy5:
	++YYCURSOR;
	yynmatch = 2;
	yypmatch[0] = yypmatch[2] = YYCURSOR - 1;
	yypmatch[1] = yypmatch[3] = YYCURSOR;
	YYSETCONDITION(yycz);
	{}
/* *********************************** */
yyc_y:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	YYSETCONDITION(yycx);
	{}
}
