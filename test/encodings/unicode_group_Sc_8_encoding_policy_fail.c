/* Generated by re2c */
#line 1 "encodings/unicode_group_Sc_8_encoding_policy_fail.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy fail
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Sc:
	
#line 14 "encodings/unicode_group_Sc_8_encoding_policy_fail.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case '$': goto yy3;
		case 0xC2: goto yy4;
		case 0xD6: goto yy5;
		case 0xD8: goto yy6;
		case 0xE0: goto yy7;
		case 0xE1: goto yy8;
		case 0xE2: goto yy9;
		case 0xEA: goto yy10;
		case 0xEF: goto yy11;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_Sc_8_encoding_policy_fail.re"
	{ return YYCURSOR == limit; }
#line 35 "encodings/unicode_group_Sc_8_encoding_policy_fail.c"
yy3:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Sc_8_encoding_policy_fail.re"
	{ goto Sc; }
#line 40 "encodings/unicode_group_Sc_8_encoding_policy_fail.c"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5: goto yy3;
		default: goto yy2;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8F: goto yy3;
		default: goto yy2;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8B: goto yy3;
		default: goto yy2;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA7: goto yy12;
		case 0xAB: goto yy14;
		case 0xAF: goto yy15;
		case 0xB8: goto yy16;
		default: goto yy2;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x9F: goto yy17;
		default: goto yy2;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x82: goto yy18;
		default: goto yy2;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA0: goto yy19;
		default: goto yy2;
	}
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xB7: goto yy20;
		case 0xB9: goto yy21;
		case 0xBC: goto yy22;
		case 0xBF: goto yy23;
		default: goto yy2;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB2:
		case 0xB3:
		case 0xBB: goto yy3;
		default: goto yy13;
	}
yy13:
	YYCURSOR = YYMARKER;
	goto yy2;
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB1: goto yy3;
		default: goto yy13;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB9: goto yy3;
		default: goto yy13;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBF: goto yy3;
		default: goto yy13;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9B: goto yy3;
		default: goto yy13;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD: goto yy3;
		default: goto yy13;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB8: goto yy3;
		default: goto yy13;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBC: goto yy3;
		default: goto yy13;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA9: goto yy3;
		default: goto yy13;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x84: goto yy3;
		default: goto yy13;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA5:
		case 0xA6: goto yy3;
		default: goto yy13;
	}
}
#line 15 "encodings/unicode_group_Sc_8_encoding_policy_fail.re"

}
static const unsigned int chars_Sc [] = {0x24,0x24,  0xa2,0xa5,  0x58f,0x58f,  0x60b,0x60b,  0x9f2,0x9f3,  0x9fb,0x9fb,  0xaf1,0xaf1,  0xbf9,0xbf9,  0xe3f,0xe3f,  0x17db,0x17db,  0x20a0,0x20bd,  0xa838,0xa838,  0xfdfc,0xfdfc,  0xfe69,0xfe69,  0xff04,0xff04,  0xffe0,0xffe1,  0xffe5,0xffe6,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	unsigned int * buffer_Sc = new unsigned int [212];
	YYCTYPE * s = (YYCTYPE *) buffer_Sc;
	unsigned int buffer_len = encode_utf8 (chars_Sc, sizeof (chars_Sc) / sizeof (unsigned int), buffer_Sc);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Sc[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Sc' failed\n");
	delete [] buffer_Sc;
	return 0;
}