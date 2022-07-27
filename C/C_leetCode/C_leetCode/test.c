#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

typedef struct Book
{
	double total;
	double read;
}B;

int main() {
	char s[] = "ABC";
	convert(s, 2);

	B lp;
	//하나의 자료형처럼 사용하는것?
	scanf_s("%d", &lp.total);
	scanf_s("%d", &lp.read);

	printf("어린왕자의 총 페이지 수는 %d 페이지입니다. \n저는 %d 페이지 까지 읽었습니다. \n따라서 %0.2f%%만큼 읽었네요", lp.total, lp.read, lp.read/lp.total*100);
	return 0;
}
		