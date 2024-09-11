#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include "invert.h"

unsigned char cmp_wide_char(wint_t char1, wint_t char2);

wint_t *braille_art;
unsigned long realloc_count = 1; 
unsigned long char_count = 0;

char mbchar1[4];
char mbchar2[4];

#define FALSE 0
#define TRUE 1
#define BUFFER 50

wint_t *invert_braille_dots(char *filename) {
	
	braille_art = malloc(BUFFER*sizeof(wint_t));
	
	// Open the file
	FILE *fp = fopen(filename, "r");
	if (!fp) { perror("Failed to read file:"); return NULL; }
	
	wint_t braichar;

	while ((braichar = fgetwc(fp)) != WEOF) {

		for (wint_t i = 0; i < 256; i++) {
			if(cmp_wide_char(braichar, (L'⠀'+i))) braille_art[char_count++] = (L'⣿'-i);
		}
		if(cmp_wide_char(braichar, L'\n')) braille_art[char_count++] = braichar; 
		// else {
		// 	fprintf(stderr, "Error, encountered a non-braille character");
		// 	a
		// }

		// Reallocate when it exceeeds the buffer limit
		if (wcslen(braille_art) == (realloc_count*BUFFER-1)) { 

			// Start reallocation for the the remainder of the user input
			realloc_count+=1; // increment reallocation counter
			braille_art = realloc(braille_art, realloc_count*BUFFER*sizeof(wint_t));
		}
	}

	fclose(fp); 
	return braille_art;
}

/* IMPORTANT
 * Why am I converting from wide to multibyte? Because I can't compare wide
 * characters on MacOS silly :P
 * Honestly I don't know why, but it won't work. MacOS apparently can't
 * compare wide characters, but Linux can. This code should work on MacOS 
 * and Linux, and I tested the same C program involving the comparison
 * between two wide characers, and it worked on linux but not mac. 
 */

unsigned char cmp_wide_char(wint_t char1, wint_t char2) {

	mbchar1[0]=0, mbchar1[1]=0, mbchar1[2]=0, mbchar1[3]=0;
	mbchar2[0]=0, mbchar2[1]=0, mbchar2[2]=0, mbchar2[3]=0;

	wctomb(mbchar1, char1);
	wctomb(mbchar2, char2);
	if (!strncmp(mbchar1, mbchar2, 4)) { return TRUE; }
	return FALSE;
}

