/* Generated by re2c */
#line 1 "conditions/condition_04.re"
// re2c $INPUT -o $OUTPUT -cg

#line 6 "conditions/condition_04.c"
{
	YYCTYPE yych;
	static void *yyctable[2] = {
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy1;
		if (yych <= '1') goto yy2;
		goto yy3;
	} else {
		if (yych <= '`') goto yy1;
		if (yych <= 'a') goto yy4;
		if (yych <= 'b') goto yy5;
	}
yy1:
yy2:
	++YYCURSOR;
#line 4 "conditions/condition_04.re"
	{ return "1"; }
#line 32 "conditions/condition_04.c"
yy3:
	++YYCURSOR;
#line 5 "conditions/condition_04.re"
	{ return "2"; }
#line 37 "conditions/condition_04.c"
yy4:
	++YYCURSOR;
#line 6 "conditions/condition_04.re"
	{ return "a"; }
#line 42 "conditions/condition_04.c"
yy5:
	++YYCURSOR;
#line 7 "conditions/condition_04.re"
	{ return "b"; }
#line 47 "conditions/condition_04.c"
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '2') {
		if (yych <= '0') goto yy7;
		if (yych <= '1') goto yy8;
		goto yy9;
	} else {
		if (yych == 'b') goto yy10;
	}
yy7:
yy8:
	++YYCURSOR;
#line 4 "conditions/condition_04.re"
	{ return "1"; }
#line 64 "conditions/condition_04.c"
yy9:
	++YYCURSOR;
#line 5 "conditions/condition_04.re"
	{ return "2"; }
#line 69 "conditions/condition_04.c"
yy10:
	++YYCURSOR;
#line 7 "conditions/condition_04.re"
	{ return "b"; }
#line 74 "conditions/condition_04.c"
}
#line 9 "conditions/condition_04.re"

conditions/condition_04.re:2:0: warning: control flow in condition 'r1' is undefined for strings that match '[\x0-\x30\x33-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condition_04.re:2:0: warning: control flow in condition 'r2' is undefined for strings that match '[\x0-\x30\x33-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condition_04.re:2:0: warning: condition numbers may change, use '/*!conditions:re2c*/' directive to generate reliable condition identifiers [-Wcondition-order]