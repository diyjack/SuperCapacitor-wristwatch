const unsigned char segment_data[] PROGMEM = {
//Sedemsegmentova nakova sada
0B00000000,	// space
0B00000001,	//!
0B01001010,	//"
0B11111100,	//#
0B01100000,	//$
0B11011010,	//%
0B11110010,	//&
0B01100110,	//'
0B10110110,	//(
0B10111110,	//)
0B11100000,	//*
0B11111110,	//+
0B11110110,	//,


0B00000010,	//-
0B00000001,	//.
0B01001010,	///
0B11111100,	//0
0B01100000,	//1
0B11011010,	//2
0B11110010,	//3
0B01100110,	//4
0B10110110,	//5
0B10111110,	//6
0B11100000,	//7
0B11111110,	//8
0B11110110,	//9
//   ABCDEFGH
0B00000000,	//:
0B01000001,	////
0B10011100,	//<
0B00010010,	//=
0B11110000,	//>
0B11001011,	//?
0B11000110,	//@
0B11101110,	//A
0B00111110,	//,
0B00011010,	//C
//   ABCDEFGH
0B01111010,	//D
0B10011110,	//E
0B10001110,	//F
0B10111100,	//G
0B00101110,	//H
0B01100000,	//I
0B01111000,	//J
0B10101110,	//K
0B00011100,	//L
0B11101100,	//M
0B00101010,	//N
0B11111100,	//O
0B11001110,	//P
0B00111010,	//Q
//   ABCDEFGH
0B00001010,	//R
0B10110110,	//S
0B00011110,	//T
0B00111000,	//U
0B01111100,	//V
0B01111100,	//W
0B01101110,	//X
0B01001110,	//Y
0B11011010,	//Z
};

const unsigned char font_data[] PROGMEM = {0B00000,
0B00000, // Space
0B00000,

0B00000,
0B10111, //!
0B00000,

0B00011,
0B00000, //"
0B00011,

0B01010,
0B10101, //#
0B01010,

0B10111,
0B11111, //$
0B11101,

0B11001,
0B00100, //%
0B10011,

0B01001,
0B10110, //&
0B01001,

0B00000,
0B00011, //'
0B00000,

0B01110,
0B10001, //(
0B00000,

0B00000,
0b10001, //)
0B01110,

0B10101,
0B01110, //*
0B10101,

0B00100,
0B01110, //+
0B00100,

0B10000,
0B01000, //'
0B00000,

0B00000,
0B01000, //-
0B01000,

0B00000,
0B10000, //.
0B00000,

0B11000,
0B00100, // /
0B00011,

0B11111,
0B10001, // 0
0B11111,

0B10010, //1
0B11111,
0B10000,

0B11101, //2
0B10101,
0B10111,

0B10001, //3
0B10101,
0B11111,

0B00111, //4
0B00100,
0B11111,

0B10111, //5
0B10101,
0B11101,

0B11111, //6
0B10101,
0B11101,

0B00001, //7
0B00001,
0B11111,

0B11111, //8
0B10101,
0B11111,

0B10111, //9
0B10101,
0B11111,


0B00000, //:
0B01010,
0B00000,


0B10000,
0B01010, //;
0B00000,

0B00100,
0B01010, //<
0B00000,

0B00000,
0B01010, //=
0B01010,

0B00000,
0B01010, //>
0B00100,


0B00000,
0B10101, //?
0B00010,


0B00111,
0B00101, // @ .... stupen
0B00111,


0B11110, //a
0B01001,
0B11110,

0B11111, //b
0B10101,
0B01010,

0B01110, //c
0B10001,
0B01010,

0B11111, //d
0B10001,
0B01110,


0B11111,
0B10101, //e
0B10001,

0B11111,
0B00101, //f
0B00001,

0B01110,
0B10101, //g
0B01101,

0B11111,
0B00100, //h
0B11111,

0B10001,
0B11111, //i
0B10001,

0B01000,
0B10000, //j
0B01111,

0B11111,
0B00100, //k
0B11011,

0B11111,
0B10000, //l
0B10000,

0B11111,
0B00010, //m
0B11111,

0B11111,
0B01000, //n
0B11111,

0B01110,
0B10001, //o
0B01110,

0B11111,
0B00101, //p
0B00010,

0B01110,
0B10001, //q
0B11110,

0B11111,
0B01101, //r
0B10010,

0B10110,
0B10101, //s
0B01001,

0B00001,
0B11111, //t
0B00001,

0B11111,
0B10000, //u
0B11111,

0B01111,
0B10000, //v
0B01111,

0B01111,
0B11110, //w
0B01111,

0B11011,
0B00100, //x
0B11011,

0B00011,
0B11100, //y
0B00011,

0B11001,
0B10101, //z
0B10011,

0B11111,
0B10001, //
0B00000,

0B00011,
0B00100, //
0B11000,

0B00000,
0B10001, //
0B11111,

0B00010,
0B00001, //^
0B00010,

0B10000,
0B10000, //_
0B10000,

0B00000,
0B00001, //'
0B00010,

0B01001,
0B10101, //a
0B11010,

0B11111,
0B10100, //b
0B01000,

0B11100,
0B10100, //
0B00000,

0B01000,
0B10100, //d
0B11111,

0B01110,
0B10101, //e
0B10110,

0B10000,
0B11110, //f
0B10101,

0B10110,
0B10101, //g
0B01110,

0B11111,
0B00100, //h
0B11000,

0B00000,
0B11101, //i
0B00000,

0B01000,
0B10000, //j
0B01101,

0B11111,
0B01000, //k
0B10100,

0B01111,
0B10000, //l
0B00000,

0B11110,
0B11110, //m
0B11100,

0B11110,
0B00010, //n
0B11100,

0B01100,
0B10010, //o
0B01100,

0B11110,
0B01010, //p
0B00100,

0B00100,
0B01010, //q
0B11110,

0B11110,
0B00100, //r
0B00010,

0B00010,
0B10101, //s
0B01000,

0B01111,
0B10010, //t
0B01000,

0B11100,
0B10000, //u
0B11100,

0B01100,
0B10000, //v
0B01100,

0B01110,
0B11100, //w
0B01110,

0B10100,
0B01000, //x
0B10100,

0B10010,
0B01100, //y
0B00010,

0B10010,
0B11010, //z
0B10110,

};

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

const prog_uint16_t notes[] PROGMEM =
{	0, //
	NOTE_C4, //
	NOTE_CS4, //
	NOTE_D4, //
	NOTE_DS4, //
	NOTE_E4, //
	NOTE_F4, //
	NOTE_FS4, //
	NOTE_G4, //
	NOTE_GS4, //
	NOTE_A4, //
	NOTE_AS4, //
	NOTE_B4, //

	NOTE_C5, //
	NOTE_CS5, //
	NOTE_D5, //
	NOTE_DS5, //
	NOTE_E5, //
	NOTE_F5, //
	NOTE_FS5, //
	NOTE_G5, //
	NOTE_GS5, //
	NOTE_A5, //
	NOTE_AS5, //
	NOTE_B5, //

	NOTE_C6, //
	NOTE_CS6, //
	NOTE_D6, //
	NOTE_DS6, //
	NOTE_E6, //
	NOTE_F6, //
	NOTE_FS6, //
	NOTE_G6, //
	NOTE_GS6, //
	NOTE_A6, //
	NOTE_AS6, //
	NOTE_B6, //

	NOTE_C7, //
	NOTE_CS7, //
	NOTE_D7, //
	NOTE_DS7, //
	NOTE_E7, //
	NOTE_F7, //
	NOTE_FS7, //
	NOTE_G7, //
	NOTE_GS7, //
	NOTE_A7, //
	NOTE_AS7, //
	NOTE_B7, //

	2*NOTE_C7, //
	2*NOTE_CS7, //
	2*NOTE_D7, //
	2*NOTE_DS7, //
	2*NOTE_E7, //
	2*NOTE_F7, //
	2*NOTE_FS7, //
	2*NOTE_G7, //
	2*NOTE_GS7, //
	2*NOTE_A7, //
	2*NOTE_AS7, //
	2*NOTE_B7, //
	0
};
