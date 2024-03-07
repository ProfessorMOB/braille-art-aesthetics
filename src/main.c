#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"

unsigned char invert_braille_dots(char character); 

char *ascii_art;
unsigned long realloc_count; 
unsigned long char_counter;

#define FALSE 0
#define TRUE 1
#define BUFFER 50

int main(void) { 
	ascii_art = malloc(BUFFER*sizeof(char));
	char_counter = 0;

	scan_file("test.txt", invert_braille_dots); 

	return 0; 
}

unsigned char invert_braille_dots(char character) {
	switch (character) {
		// case '⠀':
		// 	ascii_art[char_counter] = '⠀';
		// 	break;
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		// case ' ':
		default:
		break;
	}
	
	// Reallocate when it exceeeds the buffer limit
	if (strlen(ascii_art) == (realloc_count*BUFFER-1)) { 

		// Start reallocation for the the remainder of the user input
		realloc_count+=1; // increment reallocation counter
		ascii_art = realloc(ascii_art, realloc_count*BUFFER*sizeof(char));
	}
	return TRUE;
}
