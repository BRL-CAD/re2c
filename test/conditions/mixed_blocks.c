/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -ci
enum YYCONDTYPE {
	yycb,
	yycc,
	yycd,
	yycf,
};



{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
	{ * }
yy2:
	++YYCURSOR;
	{ a }
}



{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
		case yycb: goto yyc_b;
		case yycc: goto yyc_c;
	}
/* *********************************** */
yyc_b:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy5;
		default: goto yy4;
	}
yy4:
	++YYCURSOR;
	{ * }
yy5:
	++YYCURSOR;
	{ b }
/* *********************************** */
yyc_c:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy8;
		default: goto yy7;
	}
yy7:
	++YYCURSOR;
	{ * }
yy8:
	++YYCURSOR;
	{ c }
}



{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
		case yycd: goto yyc_d;
	}
/* *********************************** */
yyc_d:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy11;
		default: goto yy10;
	}
yy10:
	++YYCURSOR;
	{ * }
yy11:
	++YYCURSOR;
	{ d }
}





{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 'e') goto yy13;
	++YYCURSOR;
	{ * }
yy13:
	++YYCURSOR;
	{ e }
}



{
	YYCTYPE yych;
	if (YYGETCONDITION() < 1) {
		goto yyc_b;
	} else {
		goto yyc_f;
	}
/* *********************************** */
yyc_b:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 'B') goto yy15;
	++YYCURSOR;
	{ * }
yy15:
	++YYCURSOR;
	{ B }
/* *********************************** */
yyc_f:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych == 'f') goto yy17;
	++YYCURSOR;
	{ * }
yy17:
	++YYCURSOR;
	{ f }
}
