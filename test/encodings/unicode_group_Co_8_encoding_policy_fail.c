/* Generated by re2c */
#line 1 "encodings/unicode_group_Co_8_encoding_policy_fail.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy fail
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Co:
	
#line 14 "encodings/unicode_group_Co_8_encoding_policy_fail.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 0xEE: goto yy3;
		case 0xEF: goto yy4;
		case 0xF3: goto yy5;
		case 0xF4: goto yy6;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_Co_8_encoding_policy_fail.re"
	{ return YYCURSOR == limit; }
#line 30 "encodings/unicode_group_Co_8_encoding_policy_fail.c"
yy3:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
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
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy7;
		default: goto yy2;
	}
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3: goto yy7;
		default: goto yy2;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
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
		case 0xBD:
		case 0xBE: goto yy9;
		case 0xBF: goto yy10;
		default: goto yy2;
	}
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E: goto yy9;
		case 0x8F: goto yy10;
		default: goto yy2;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
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
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy11;
		default: goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	goto yy2;
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
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
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy7;
		default: goto yy8;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
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
		case 0xBD:
		case 0xBE: goto yy7;
		case 0xBF: goto yy12;
		default: goto yy8;
	}
yy11:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Co_8_encoding_policy_fail.re"
	{ goto Co; }
#line 397 "encodings/unicode_group_Co_8_encoding_policy_fail.c"
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
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
		case 0xBD: goto yy11;
		default: goto yy8;
	}
}
#line 15 "encodings/unicode_group_Co_8_encoding_policy_fail.re"

}
static const unsigned int chars_Co [] = {0xe000,0xf8ff,  0xf0000,0xffffd,  0x100000,0x10fffd,  0x0,0x0};
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
	unsigned int * buffer_Co = new unsigned int [549876];
	YYCTYPE * s = (YYCTYPE *) buffer_Co;
	unsigned int buffer_len = encode_utf8 (chars_Co, sizeof (chars_Co) / sizeof (unsigned int), buffer_Co);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Co[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Co' failed\n");
	delete [] buffer_Co;
	return 0;
}