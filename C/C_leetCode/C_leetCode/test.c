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
	//�ϳ��� �ڷ���ó�� ����ϴ°�?
	scanf_s("%d", &lp.total);
	scanf_s("%d", &lp.read);

	printf("������� �� ������ ���� %d �������Դϴ�. \n���� %d ������ ���� �о����ϴ�. \n���� %0.2f%%��ŭ �о��׿�", lp.total, lp.read, lp.read/lp.total*100);
	return 0;
}
		