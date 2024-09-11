#ifndef BRAILLE_CARTESIAN
#define BRAILLE_CARTESIAN

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

#endif
