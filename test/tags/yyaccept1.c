/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i
// Normally re2c generates one 'yyaccept' value for each rule
// that is shadowed by a longer rule.
// However, if two different accepting states accept the same
// rule, but their epsilon-transitions to this rule have
// different sets of tags, re2c should split 'yyaccept' value.


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
	{}
yy2:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
		case 'b': goto yy4;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYCTXMARKER;
	{}
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy6;
		default: goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		YYCTXMARKER = YYCURSOR;
		goto yy3;
	} else {
		goto yy3;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'd': goto yy7;
		default: goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'e': goto yy8;
		default: goto yy5;
	}
yy8:
	++YYCURSOR;
	{}
}
