/* Generated by re2c */
// overlapping trailing contexts of variable length:
// we need multiple tags and we cannot deduplicate them


{
	YYCTYPE yych;
	if (YYLESSTHAN (4)) YYFILL(4);
	yych = YYPEEK ();
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
	{ d }
yy4:
	YYSKIP ();
	yych = YYPEEK ();
	YYTAGP (yyt2);
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy5;
	}
yy5:
	YYRESTORETAG (yyt2);
	{ 1 }
yy6:
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'c':
		YYTAGP (yyt1);
		goto yy9;
	default:	goto yy8;
	}
yy7:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
yy8:
	switch (yych) {
	case 'b':	goto yy7;
	default:	goto yy5;
	}
yy9:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'c':	goto yy11;
	default:	goto yy10;
	}
yy10:
	YYRESTORE ();
	goto yy5;
yy11:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'c':	goto yy11;
	default:	goto yy13;
	}
yy13:
	YYRESTORETAG (yyt1);
	{ 0 }
}

