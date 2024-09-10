#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>

#define BUFFER 50

char braille_tbl[4][2];

struct x_array {
	int x_len;
	char (*x)[4][2];
};

struct y_array {
	int y_len;
	struct x_array *y;
	int largest_x_len;
};

void encode_braille_tbl(wint_t braichar);
wint_t decode_braille_tbl(char brai_tbl[4][2]);

struct y_array cartesian_encode(char *filename);
wint_t *cartesian_decode(struct y_array y);

char get_dot(struct y_array, int x, int y);
void set_dot(struct y_array, int x, int y, char val);

// test the braille table
// void test_braille(char val[4][2]);

int main(void) {

	setlocale(LC_ALL, "");
	// encode_braille_tbl(L'⣯');
	// test_braille(braille_tbl);
	// encode_braille_tbl(L'⢤');
	// test_braille(braille_tbl);
	// printf("%lc", decode_braille_tbl(braille_tbl));
	struct y_array test = cartesian_encode("input6.txt");
	// for (int x = 0; x!=6 ;x++) printf("%d\n", get_dot(test, x, 4));
	// printf("%ls\n", cartesian_decode(test));
	
	// printf("%d,%d\n", get_dot(test, 0, 8), get_dot(test, 1, 8));
	// printf("%d,%d\n\n", get_dot(test, 0, 9), get_dot(test, 1, 9));
	//
	// set_dot(test, 0, 8, 1); set_dot(test, 1, 8, 1);
	// set_dot(test, 0, 9, 0); set_dot(test, 1, 9, 0);
	// printf("%d,%d\n", get_dot(test, 0, 8), get_dot(test, 1, 8));
	// printf("%d,%d\n\n\n", get_dot(test, 0, 9), get_dot(test, 1, 9));
	//
	// printf("%d,%d\n", get_dot(test, 0, 1), get_dot(test, 1, 1));
	// printf("%d,%d\n\n", get_dot(test, 0, 2), get_dot(test, 1, 2));
	//
	// set_dot(test, 0, 1, 1); set_dot(test, 1, 1, 1);
	// set_dot(test, 0, 2, 1); set_dot(test, 1, 2, 1);
	// printf("%d,%d\n", get_dot(test, 0, 1), get_dot(test, 1, 1));
	// printf("%d,%d\n\n", get_dot(test, 0, 2), get_dot(test, 1, 2));

	printf("%ls\n", cartesian_decode(test));
	// for (int i = 0; i != test.y_len; i++) {
	// 	for (int j = 0; j != test.y[i].x_len; j++) {
	// 		test_braille(test.y[i].x[j]);
	// 		printf("\n\n");
	// 	}
	// 	printf("\n\n");
	// 	free(test.y[i].x);
	// }
	// free(test.y);
	
	return 0;
}

void encode_braille_tbl(wint_t braichar) {
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

wint_t decode_braille_tbl(char brai_tbl[4][2]) {

	wint_t brai_char=L'⠀';

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


struct y_array cartesian_encode(char *filename) {
	
	struct x_array *y = malloc(BUFFER*sizeof(struct x_array));
	int x_inc = 0;
	int y_inc = 0;
	int x_realloc_count = 1;
	int y_realloc_count = 1;
	char (*x)[4][2]=0;

	FILE *fp = fopen(filename, "r");
	if (!fp) { 
		perror("Failed to read file:");
		return (struct y_array) {0}; 
	}

	wint_t braichar;
	int largest_x = 0;

	while ((braichar = fgetwc(fp)) != WEOF) {
		x_inc = 0;
		if (braichar != L'\n') {

			x = malloc(x_realloc_count*BUFFER*sizeof(char[4][2]));
			encode_braille_tbl(braichar);
			memcpy(*(x+x_inc),braille_tbl,sizeof(char[2][4]));
			x_inc++; 
			
			while(((braichar = fgetwc(fp)) != WEOF) 
				&& braichar != L'\n') {

				if (x_inc == BUFFER*x_realloc_count-1) {
					x_realloc_count++; 
					x = realloc(x, x_realloc_count*BUFFER*sizeof(char[4][2]));
				}
				encode_braille_tbl(braichar);
				memcpy(*(x+x_inc),braille_tbl,sizeof(char[2][4]));
				x_inc++; 
			}
			largest_x= (largest_x<=x_inc) ? x_inc : largest_x;
		}
		if (y_inc == BUFFER*y_realloc_count-1) {
			y_realloc_count++; 
			y = realloc(y, y_realloc_count*BUFFER*sizeof(struct x_array));
		}
		y[y_inc]=(struct x_array) { x_inc, x };
		x=0;
		y_inc++; 

	}
	
	fclose(fp); 

	return (struct y_array) {y_inc, y, largest_x};
}

wint_t *cartesian_decode(struct y_array y) {
	int chr_count = 0;
	wint_t *braille_art = 0;

	for (int i =0; i != y.y_len; i++) {
		braille_art = realloc(braille_art, (chr_count+y.y[i].x_len+2)*sizeof(wint_t));

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
	if ((cartmap.y[y].x_len > x) && (cartmap.y_len > y)) {
		return 1;
	}
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
