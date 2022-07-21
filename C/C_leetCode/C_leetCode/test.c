#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int m2n() {
	int a[] = { 1,2,3,4,5,6,7 };
	int* k = a;
	for (int i = 0; i < 7; i++,k++) {
		printf("%d", *(k));
	}
	
}