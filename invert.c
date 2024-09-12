#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include "invert.h"
#include <assert.h>
/* Todo
 * replace wint_t *braille_art with wchar_t *braille_art *
 * change the return type of invert_braille_dots to wchar_t *
 * change the argument to be a wchar_t character string instead *
 * replace wint_t with wchar_t in malloc *
 * remove file opening code *
 * replace wint_t with wchar_t in braichar *
 * use the same code used in cartesian.c in while condition
 * change wint_t i to wchar_t i
 * remove wchar_t typecasting
 * In the part of the code that checks for the need to reallocate, replace wint_t with wchar_t
 * remove fclose(fp)
 * remove cmp_wide_char and all variables associated with it
 */

unsigned char cmp_wide_char(wint_t char1, wint_t char2);

wchar_t *braille_art; // wchar_t *braille_art
unsigned long realloc_count = 1; // remove
unsigned long char_count = 0; // remove

char mbchar1[4]; // remove
char mbchar2[4]; // remove

#define FALSE 0
#define TRUE 1
#define BUFFER 50

// wint_t *invert_braille_dots(char *filename) { 
wchar_t *invert_braille_dots(wchar_t *art) {
	
	// braille_art = malloc(BUFFER*sizeof(wint_t)); // sizeof(wchar_t
	braille_art = malloc(BUFFER*sizeof(wchar_t)); 	

	// Open the file //remove all
	// FILE *fp = fopen(filename, "r");
	// if (!fp) { perror("Failed to read file:"); return NULL; }
	
	// wint_t braichar; // wchar_t braichar
	wchar_t braichar; // wchar_t braichar
	
	// while ((braichar = fgetwc(fp)) != WEOF) { 
	while ((braichar = art[char_count]) != L'\0') {

		for (wchar_t i = 0; i < 256; i++) {
			// if(cmp_wide_char(braichar, (L'⠀'+i))) braille_art[char_count++] = (L'⣿'-i);
			// if ( (wchar_t) braichar == (L'⠀'+i)) braille_art[char_count++] = (L'⣿'-i); // remove typecasting
			if (braichar == (L'⠀'+i)) braille_art[char_count] = (L'⣿'-i); // remove typecasting
		}
		// if (cmp_wide_char(braichar, L'\n')) braille_art[char_count++] = braichar; 
		if (braichar == L'\n') braille_art[char_count] = braichar; // remove typecasting
		// if ((wchar_t) braichar == L'\n') braille_art[char_count++] = braichar; // remove typecasting
		// else {
		// 	fprintf(stderr, "Error, encountered a non-braille character");
		// 	a
		// }
		char_count++;
		// Reallocate when it exceeeds the buffer limit
		if (wcslen(braille_art) == (realloc_count*BUFFER-1)) { 

			// Start reallocation for the the remainder of the user input
			realloc_count+=1; // increment reallocation counter
			braille_art = realloc(braille_art, realloc_count*BUFFER*sizeof(wchar_t)); // sizeof(wchar_t)
			// braille_art = realloc(braille_art, realloc_count*BUFFER*sizeof(wint_t)); // sizeof(wchar_t)
		}
	}

	// fclose(fp); // remove
	return braille_art;
}

/* IMPORTANT
 * Why am I converting from wide to multibyte? Because I can't compare wide
 * characters on MacOS silly :P
 * Honestly I don't know why, but it won't work. MacOS apparently can't
 * compare wide characters, but Linux can. This code should work on MacOS 
 * and Linux, and I tested the same C program involving the comparison
 * between two wide characers, and it worked on linux but not mac. 
 *
 * Turns out, the actual issue was that a wint_t character and a wchar_t character cannot be compared, soooooo...
 * yeah, you can thank my own stupidity for that :(, I don't remember how it even worked on linux, but idk, and 
 * honestly, idc
 */

unsigned char cmp_wide_char(wint_t char1, wint_t char2) {

	mbchar1[0]=0, mbchar1[1]=0, mbchar1[2]=0, mbchar1[3]=0;
	mbchar2[0]=0, mbchar2[1]=0, mbchar2[2]=0, mbchar2[3]=0;

	wctomb(mbchar1, char1);
	wctomb(mbchar2, char2);
	if (!strncmp(mbchar1, mbchar2, 4)) { return TRUE; }
	return FALSE;
}

