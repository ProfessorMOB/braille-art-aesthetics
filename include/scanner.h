#ifndef BRAILLE_DOTS_INVERTER
#define BRAILLE_DOTS_INVERTER

void scan_file(
	char *filename, 
	unsigned char (*lookahead)(char current_char, char next_char)
);

#endif 
