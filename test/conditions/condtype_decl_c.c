/* Generated by re2c */
#line 1 "conditions/condtype_decl_c.re"
// re2c $INPUT -o $OUTPUT -c
#line 5 "conditions/condtype_decl_c.c"
enum YYCONDTYPE {
	yyca,
	yycb,
};
#line 2 "conditions/condtype_decl_c.re"


int main ()
{
	YYCONDTYPE cond;
	char * YYCURSOR;
#define YYGETCONDITION() cond

#line 19 "conditions/condtype_decl_c.c"
{
	unsigned char yych;
	switch (YYGETCONDITION()) {
		case yyca: goto yyc_a;
		case yycb: goto yyc_b;
	}
/* *********************************** */
yyc_a:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
yy2:
	++YYCURSOR;
#line 12 "conditions/condtype_decl_c.re"
	{}
#line 38 "conditions/condtype_decl_c.c"
/* *********************************** */
yyc_b:
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy5;
		default: goto yy4;
	}
yy4:
yy5:
	++YYCURSOR;
#line 13 "conditions/condtype_decl_c.re"
	{}
#line 51 "conditions/condtype_decl_c.c"
}
#line 14 "conditions/condtype_decl_c.re"

	return 0;
}
conditions/condtype_decl_c.re:9:0: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condtype_decl_c.re:9:0: warning: control flow in condition 'b' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]