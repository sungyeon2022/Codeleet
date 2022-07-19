#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//°Ë»ç¿ë
int main() {
	char sarr[] = "banana";
	for (int i = strlen(sarr)-1; i >= 0; i--) {
		printf("%c", sarr[i]);
	}
	return 0;
}