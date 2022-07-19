#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//°Ë»ç¿ë
int main() {
	int num=3;
	int m = num;
	char rs[]="CD";
	char roman[] = "MCMDCDCXCLXLXIXVIVI";
	int in[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
	char* a = roman;
	char* b = rs;
	*b = *a;
	printf("%s", b);
}