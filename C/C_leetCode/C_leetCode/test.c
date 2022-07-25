#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int we(int a) {
	switch (a/3) {
		case 0:
			printf("겨울입니다.");
			break;
		case 4:
			printf("겨울입니다.");
			break;
		case 1:
			printf("봄입니다.");
			break;
		case 2:
			printf("여름입니다.");
			break;
		case 3:
			printf("가을입니다.");
			break;
	}
}

int main() {
	int s;
	scanf_s("%d", &s);
	int re = s / 3;
	if (re==0||re==4) {
		printf("겨울입니다.");
	}
	else if (re==1) {
		printf("봄입니다.");
	}
	else if (re==2) {
		printf("여름입니다.");
	}
	else if (re==3) {
		printf("가을입니다.");
	}
	we(s);
}

