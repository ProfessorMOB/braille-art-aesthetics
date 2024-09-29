#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include "get_braille_contents.h"
#include "invert.h"
#include "cartesian.h"
#include <getopt.h>

void clear_right(struct y_array art) {
	for (int y = 0; y < (art.y_len*4); y++) {
		for (int x = (art.largest_x_len*2-1); x >= 0; x--) {
		if (get_dot(art, x-1, y) || (x==0)) set_dot(art, x, y, 0);
			else {
				break;
			}
		}
	}
}

void clear_left(struct y_array art) {
	for (int y = 0; y < (art.y_len*4); y++) {
		for (int x = 0; x < (art.largest_x_len*2); x++) {
			if (get_dot(art, x+1, y) || (x==(art.largest_x_len*2-1))) set_dot(art, x, y, 0);
			else {
				break;
			}
		}
	}
}

int main(int argc, char *argv[]) {

	int opt; 
	char *arg = 0; 
	char invert_flag = 0; 
	char clear_right_flag = 0; 
	char clear_left_flag = 0; 
	setlocale(LC_ALL, "");
	while ((opt = getopt(argc, argv, "f:ilr")) != -1) {
		switch (opt) {
			case 'f':
				// printf("%s", optarg);
				arg = malloc(strlen(optarg));
				memcpy(arg, optarg, strlen(optarg));
				break;
			case 'i':
				invert_flag = 1; 
				break;
			case 'l':
				clear_left_flag = 1;
				break;
			case 'r':
				clear_right_flag = 1;
				break;
			default:
				return -1;
		}
	}

	wchar_t *braille_file = get_braille_contents(arg);
	if (braille_file == NULL) return -1;

	wchar_t *invert_result = 0; 
	
	if (invert_flag) {
		invert_result = invert_braille_dots(braille_file);
	} else {
		invert_result = braille_file;
	}

	struct y_array cartmap = cartesian_encode(invert_result);
	if (clear_left_flag) {
		clear_left(cartmap);
	}

	if (clear_right_flag) {
		clear_right(cartmap);
	}

	wchar_t *final_result = cartesian_decode(cartmap);
	printf("%ls", final_result);
	free(invert_result);
	return 0;
}
