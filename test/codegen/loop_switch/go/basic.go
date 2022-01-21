// Code generated by re2c, DO NOT EDIT.
//go:generate re2go $INPUT -o $OUTPUT --loop-switch -i

package main                              //
                                          //
func lex(str string) {                    // Go code
    var cursor int                        //
                                          //

{
	var yych byte
	yystate := 0
yyl:
	for {
		switch (yystate) {
		case 0:
			yych = str[cursor]
			cursor += 1
			if (yych <= '0') {
				yystate = 1
				continue yyl
			}
			if (yych <= '9') {
				yystate = 2
				continue yyl
			}
			yystate = 1
			continue yyl
		case 1:
			{ panic("error!"); }
		case 2:
			yych = str[cursor]
			if (yych <= '/') {
				yystate = 3
				continue yyl
			}
			if (yych <= '9') {
				cursor += 1
				yystate = 2
				continue yyl
			}
			yystate = 3
			continue yyl
		case 3:
			{ return }
		default:
			panic("internal lexer error")
		}
	}
}

}                                         //
                                          //
func main() {                             // Go code
    lex("1234\x00")                       //
}                                         //