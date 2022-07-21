#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s) {
	int mxlen = 1;
	int start = 0;
	char* rs="0";
	for (int i = 0; i < strlen(s); i++) {
		for (int j = strlen(s); j >= i; j--) {
			if (s[i] == s[j]) {
				int a = i + j;
				for (int k = i; k <= a / 2; k++) {
					if (s[k] != s[a - k]) { //°Ë»ç
						goto ex;
					}
				}
				if (mxlen < (j - i + 1)) {
					mxlen = j - i + 1;
					start = i;
				}
			}
		}
		ex:;
	}
	for (int i = 0; i < mxlen; i++, rs++) {
		rs = s[start + i];
	}
	rs = '\0';
	return rs;
}
