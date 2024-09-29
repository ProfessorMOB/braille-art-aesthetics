#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include "invert.h"

#define BUFFER 50

wchar_t *invert_braille_dots(wchar_t *art) {

	wchar_t *braille_art; 

	unsigned long realloc_count = 1; 
	unsigned long char_count = 0; 
	
	braille_art = malloc(BUFFER*sizeof(wchar_t)); 	

	wchar_t braichar; 
	
	while ((braichar = art[char_count]) != L'\0') {

		for (wchar_t i = 0; i < 256; i++) {

			if (braichar == (L'⠀'+i)) braille_art[char_count] = (L'⣿'-i); 
		}
		if (braichar == L'\n') braille_art[char_count] = braichar; 

		char_count++;

		// Reallocate when it exceeeds the buffer limit
		if (wcslen(braille_art) == (realloc_count*BUFFER-1)) { 

			// Start reallocation for the the remainder of the user input
			realloc_count+=1; // increment reallocation counter
			braille_art = realloc(braille_art, realloc_count*BUFFER*sizeof(wchar_t));
		}
	}

	return braille_art;
}
