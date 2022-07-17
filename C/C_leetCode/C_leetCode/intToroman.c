#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* sc(char* a, char b, int d) {
	while (*a)
	{
		a++;
	}
	for (int i = 0; i < d; i++) {
		*a = "b";
		a++;
	}
	*a = '\0';
}

char* intToRoman(int num) {
	char s[4000];
	int a = num / 1000;
	num %= 1000;
	sc(s, "M", a);
	a = num / 900;
	num %= 900;
	sc(s, "CM", a);
	a = num / 500;
	num %= 500;
	sc(s, "D", a);
	a = num / 400;
	num %= 400;
	sc(s, "CD", a);
	a = num / 100;
	num %= 100;
	sc(s, "C", a);
	a = num / 90;
	num %= 90;
	sc(s, "XC", a);
	a = num / 50;
	num %= 50;
	sc(s, "L", a);
	a = num / 40;
	num %= 40;
	sc(s, "XL", a);
	a = num / 10;
	num %= 10;
	sc(s, "X", a);
	a = num / 9;
	num %= 9;
	sc(s, "IX", a);
	a = num / 5;
	num %= 5;
	sc(s, "V", a);
	a = num / 4;
	num %= 4;
	sc(s, "IV", a);
	a = num / 1;
	num %= 1;
	sc(s, "I", a);
	return a;
}