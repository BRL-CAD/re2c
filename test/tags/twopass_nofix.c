/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --fixed-tags none
// need two passes in liveness analyses for chains of copy commands:
// same version may occur as both LHS and RHS, e.g. 'x = y; y = z;'


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt3 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt1 = yyt2 = yyt3 = YYCURSOR;
			goto yy5;
		default:
			yyt2 = YYCURSOR;
			goto yy2;
	}
yy1:
	r = yyt1;
	s = yyt4;
	{}
yy2:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy8;
		case 'b':
			yyt1 = yyt4 = YYCURSOR;
			goto yy9;
		default:
			yyt1 = YYCURSOR;
			goto yy7;
	}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy10;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
		case 0:
			yyt1 = yyt4 = NULL;
			goto yy1;
		case 1:
			yyt1 = yyt2;
			yyt4 = YYCURSOR;
			goto yy1;
		case 2: goto yy6;
		case 3:
			yyt4 = YYCURSOR;
			goto yy1;
		default:
			yyt1 = yyt2;
			goto yy1;
	}
yy5:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy8;
		case 'b':
			yyt1 = yyt4 = YYCURSOR;
			goto yy9;
		default:
			yyt1 = YYCURSOR;
			goto yy7;
	}
yy6:
	p = yyt3;
	q = yyt1;
	y = yyt2;
	{}
yy7:
	yyaccept = 3;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = yyt1;
			yyt4 = YYCURSOR;
			goto yy8;
		case 'b':
			yyt2 = yyt1;
			yyt1 = yyt4 = YYCURSOR;
			goto yy9;
		default:
			yyt1 = YYCURSOR;
			goto yy7;
	}
yy8:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy11;
		default: goto yy4;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy11;
		case 'b':
			yyt2 = yyt1;
			yyt1 = yyt4 = YYCURSOR;
			goto yy9;
		default:
			yyt1 = YYCURSOR;
			goto yy7;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy13;
		case 'b':
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy14;
		default:
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy12;
	}
yy11:
	yyaccept = 4;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		case 'b':
			yyt1 = YYCURSOR;
			goto yy9;
		default:
			yyt1 = YYCURSOR;
			goto yy7;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		case 'b': goto yy14;
		default: goto yy12;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt3 = NULL;
			goto yy15;
		case 'b':
			yyt3 = NULL;
			yyt1 = yyt2 = YYCURSOR;
			goto yy14;
		default:
			yyt3 = NULL;
			yyt1 = yyt2 = YYCURSOR;
			goto yy12;
	}
yy14:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy14;
		default: goto yy12;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy16;
		default: goto yy4;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		case 'b':
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy14;
		default:
			yyt1 = NULL;
			yyt2 = YYCURSOR;
			goto yy12;
	}
}

tags/twopass_nofix.re:8:29: warning: rule matches empty string [-Wmatch-empty-string]
tags/twopass_nofix.re:7:42: warning: tag 'p' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass_nofix.re:7:42: warning: tag 'q' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass_nofix.re:7:42: warning: tag 'y' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass_nofix.re:8:29: warning: tag 'r' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
tags/twopass_nofix.re:8:29: warning: tag 's' has 2nd degree of nondeterminism [-Wnondeterministic-tags]