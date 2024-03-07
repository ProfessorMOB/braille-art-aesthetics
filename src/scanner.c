#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "scanner.h"

void scan_file(
		char *filename, 
		unsigned char (*lookahead)(char current_char)
	) {

	// Open the file
	FILE *fp = fopen(filename, "r");
	if (!fp) { perror("Failed to read file."); return; }
	
	// Declare current and lookahead characters
	char current_char = fgetc(fp);	

	// scan the file, current and lookahead, shift lookahead into current
	while (!feof(fp) && lookahead(current_char)) {

		current_char = fgetc(fp); 
	}
}
