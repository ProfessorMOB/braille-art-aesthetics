#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include "cartesian.h"

#define BUFFER 50

char braille_tbl[4][2];

// test the braille table
void test_braille(char val[4][2]);


void encode_braille_tbl(wchar_t braichar) {
	// clear the braichar
	memset(braille_tbl, 0, sizeof(char[4][2]));
	
	// Determine the dot locations through elimination
	braichar-=L'⠀';

	if (braichar >=0x80){ braille_tbl[3][1] = 1; braichar-=0x80;}
	if (braichar >=0x40){ braille_tbl[3][0] = 1; braichar-=0x40;}
	if (braichar >=0x20){ braille_tbl[2][1] = 1; braichar-=0x20;}
	if (braichar >=0x10){ braille_tbl[1][1] = 1; braichar-=0x10;}
	if (braichar >= 0x8) { braille_tbl[0][1] = 1; braichar-=0x8;}
	if (braichar >= 0x4) { braille_tbl[2][0] = 1; braichar-=0x4;}
	if (braichar >= 0x2) { braille_tbl[1][0] = 1; braichar-=0x2;} 

	/* 
	 * It's '==' rather than '>' because after subtracting all 
	 * other hex values, either a value of 1 or 0 remains, and 1 
	 * cannot be greater than 1. Obviously. 
	*/
	if (braichar == 0x1) {

		braille_tbl[0][0] = 1;
		braichar-=0x1;
	}
}

wchar_t decode_braille_tbl(char brai_tbl[4][2]) {

	wchar_t brai_char=L'⠀';

	brai_char += (brai_tbl[0][0] ? 0x1 : 0x0);
	brai_char += (brai_tbl[0][1] ? 0x8 : 0x0);
	brai_char += (brai_tbl[1][0] ? 0x2 : 0x0);
	brai_char += (brai_tbl[1][1] ? 0x10: 0x0);
	brai_char += (brai_tbl[2][0] ? 0x4 : 0x0);
	brai_char += (brai_tbl[2][1] ? 0x20: 0x0);
	brai_char += (brai_tbl[3][0] ? 0x40: 0x0);
	brai_char += (brai_tbl[3][1] ? 0x80: 0x0);

	return brai_char;
}

struct y_array cartesian_encode(wchar_t *braille_art) {
	
	struct x_array *y = malloc(BUFFER*sizeof(struct x_array));
	int x_inc = 0;
	int y_inc = 0;
	int x_realloc_count = 1;
	int y_realloc_count = 1;
	char (*x)[4][2]=0;

	wchar_t braichar;
	int largest_x = 0;

	int char_count = 0;

	while ((braichar=braille_art[char_count]) != L'\0') {
		x_inc = 0;

		if (braichar != L'\n') {

			x = malloc(x_realloc_count*BUFFER*sizeof(char[4][2]));
			encode_braille_tbl(braichar);
			memcpy(*(x+x_inc),braille_tbl,sizeof(char[2][4]));
			x_inc++; 
			char_count++;
			
			while ((braichar=braille_art[char_count]) != L'\0'
				&& braichar != L'\n') {

				if (x_inc == BUFFER*x_realloc_count-1) {
					x_realloc_count++; 
					x = realloc(x, x_realloc_count*BUFFER*sizeof(char[4][2]));
				}
				encode_braille_tbl(braichar);
				memcpy(*(x+x_inc),braille_tbl,sizeof(char[2][4]));
				x_inc++; 
				char_count++;
			}
			largest_x= (largest_x<=x_inc) ? x_inc : largest_x;
		}

		char_count++;
		if (y_inc == BUFFER*y_realloc_count-1) {
			y_realloc_count++; 
			y = realloc(y, y_realloc_count*BUFFER*sizeof(struct x_array));
		}
		y[y_inc]=(struct x_array) { x_inc, x };
		x=0;
		y_inc++; 
	}

	return (struct y_array) {y_inc, y, largest_x};
}

wchar_t *cartesian_decode(struct y_array y) {
	int chr_count = 0;
	wchar_t *braille_art = 0;

	for (int i =0; i != y.y_len; i++) {
		braille_art = realloc(braille_art, (chr_count+y.y[i].x_len+2)*sizeof(wchar_t));

		for (int j = 0; j != y.y[i].x_len; j++) {
			braille_art[chr_count+j] = decode_braille_tbl(y.y[i].x[j]);
		}
		chr_count+=y.y[i].x_len;
		braille_art[chr_count++]=L'\n';
		free(y.y[i].x); // it should do free outside of the loop
	}
	if(braille_art != 0) braille_art[chr_count]=L'\0';
	free(y.y); 

	return braille_art;
}

char dot_exists(struct y_array cartmap, int x, int y){
	if ((cartmap.y[y].x_len > x) && (cartmap.y_len > y)) return 1;
	return 0;
}

char get_dot(struct y_array cartmap, int x, int y) {

	int a = x % 2, b = y % 4;
	x /= 2; y /= 4;
	return (dot_exists(cartmap, x,y) ? cartmap.y[y].x[x][b][a] : 0);
}

void set_dot(struct y_array cartmap, int x, int y, char val) {
	
	if ((x < 0) || (y < 0)) {
		printf("Error: Negative number, ABORT");
		return;
	}

	int a = x % 2, b = y % 4;
	x /= 2; y /= 4;

	if (!dot_exists(cartmap, x, y)) {
		if (cartmap.y_len <= y) {

			cartmap.y = realloc(cartmap.y, y*sizeof(struct x_array));
			cartmap.y[y].x=realloc(cartmap.y[y].x,x*sizeof(char[4][2]));
			cartmap.y_len= y + 1; // '+ 1' to account for 0 indexing
			cartmap.y[y].x_len= x + 1; // '+ 1' to account for 0 indexing
		}
		else if (cartmap.y[y].x_len <= x) {
			
			cartmap.y[y].x=realloc(cartmap.y[y].x,x*sizeof(char[4][2]));
			cartmap.y[y].x_len= x + 1; // '+ 1' to account for 0 indexing
		}
	}
	cartmap.y[y].x[x][b][a] = val;
}

/* NOTE
 * The following code is for bugfixing purposes
 * The code commented below it is scratch code in case I need it
 */

void test_braille(char val[4][2]){

	printf("%d,%d\n%d,%d\n%d,%d\n%d,%d", 
			val[0][0],
			val[0][1],
			val[1][0],
			val[1][1],
			val[2][0],
			val[2][1],
			val[3][0],
			val[3][1]);
}


/*
void cut_braille_corners(char *filename);

void find_x(double y, double size);

void find_x(double y, double size) {

	for(; y > 0; y--) {
		// printf("%lf ", round(sqrt( (size*size) - (y*y) )) );
		for (int l = (int) round(sqrt( (size*size) - (y*y) )); l > 0; l--){
			printf("%s", "⣿");
		}
		printf("\n"); 

		// // Reallocate when it exceeeds the buffer limit
		// if (wcslen(braille_art) == (realloc_count*BUFFER-1)) { 
		//
		// 	// Start reallocation for the the remainder of the user input
		// 	realloc_count+=1; // increment reallocation counter
		// 	braille_art = realloc(braille_art, realloc_count*BUFFER*sizeof(wint_t));
		// }
	}
}

*/
