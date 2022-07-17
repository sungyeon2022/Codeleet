#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//°Ë»ç¿ë
int main() {
	int num=3;
	int m = num;
	char rs[10000];
	char* roman[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
	int in[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
	for (int i = 0; i < 13; i++) {
		int nrs = m / in[i];
		m %= in[i];
		for (int j = 0; j < m; j++) {
			strcat_s(rs,8,roman[i]);
		}
	}
	printf("%c", rs);
}