#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include "get_braille_contents.h"
#include "invert.h"
#include "cartesian.h"
#include <assert.h>

int main(void) {
	setlocale(LC_ALL, "");
	wchar_t *test = get_braille_contents("inputs/input.txt");
	wchar_t *test3 = invert_braille_dots(test);
	struct y_array test1 = cartesian_encode(test3);
	for (int y = 0; y < (test1.y_len*4); y++) {
		for (int x = 0; x < (test1.largest_x_len*2); x++) {
			if (get_dot(test1, x+1, y)) set_dot(test1, x, y, 0);
			else {
				break;
			}
		}
	}
	for (int y = 0; y < (test1.y_len*4); y++) {
		for (int x = (test1.largest_x_len*2-1); x > 0; x--) {
			if (get_dot(test1, x-1, y)) set_dot(test1, x, y, 0);
			else {
				break;
			}
		}
	}
	// printf("%ls", test);
	wchar_t *test2 = cartesian_decode(test1);
	printf("%ls", test2); 
	// free(test);
	// free(test2);
	return 0;
}

/* int main(int argc, char *argv[]) {

	if (argc != 2) {
		fprintf(stderr, "Usage:\n invert_braille_dots file");
		return 1;
	}
	setlocale(LC_ALL, "");
	wint_t *art = invert_braille_dots(argv[1]);
	if (art) {
		printf("%ls", art);
		free(art);
		return 0;
	}

	return 1;
} */

/* int main(void) {

	setlocale(LC_ALL, "");
	// encode_braille_tbl(L'⣯');
	// test_braille(braille_tbl);
	// encode_braille_tbl(L'⢤');
	// test_braille(braille_tbl);
	// printf("%lc", decode_braille_tbl(braille_tbl));
	struct y_array test = cartesian_encode("inputs/input6.txt");
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
} */
