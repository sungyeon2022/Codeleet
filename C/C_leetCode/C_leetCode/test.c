#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int we(int a) {
	switch (a/3) {
		case 0:
			printf("�ܿ��Դϴ�.");
			break;
		case 4:
			printf("�ܿ��Դϴ�.");
			break;
		case 1:
			printf("���Դϴ�.");
			break;
		case 2:
			printf("�����Դϴ�.");
			break;
		case 3:
			printf("�����Դϴ�.");
			break;
	}
}

int main() {
	int s;
	scanf_s("%d", &s);
	int re = s / 3;
	if (re==0||re==4) {
		printf("�ܿ��Դϴ�.");
	}
	else if (re==1) {
		printf("���Դϴ�.");
	}
	else if (re==2) {
		printf("�����Դϴ�.");
	}
	else if (re==3) {
		printf("�����Դϴ�.");
	}
	we(s);
}

