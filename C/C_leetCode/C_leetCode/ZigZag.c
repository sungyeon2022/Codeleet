#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
	char* res = malloc(strlen(s));
	char** re;
	
	char** table = (char**)malloc(numRows * sizeof(char*));
	for (int i = 0; i < numRows; i++) {
		table[i] = (char*)malloc(length / 2 * sizeof(char));
		memset(table[i], 0, length / 2 * sizeof(char));
	}

}