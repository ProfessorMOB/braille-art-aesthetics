#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include "get_braille_contents.h"

unsigned long realloc_count = 1;
unsigned long char_count = 0;
#define BUFFER 50

wchar_t *get_braille_contents(char *filename){

	setlocale(LC_ALL, "");

	wint_t braichar = 0;
	wchar_t *braille_art = malloc(BUFFER*sizeof(wchar_t));

	FILE *fp = fopen(filename, "r");
	if (!fp) { perror("Failed to read file:"); return NULL; }
	while ((braichar = fgetwc(fp)) != WEOF) {

		braille_art[char_count++] = (wchar_t) braichar;

		// Reallocate when it exceeeds the buffer limit
		if (char_count == (realloc_count*BUFFER)) { 

			// Start reallocation for the the remainder of the user input
			realloc_count+=1; // increment reallocation counter
			braille_art = realloc(braille_art, realloc_count*BUFFER*sizeof(wchar_t));
		}
	}
	return braille_art; 
}
