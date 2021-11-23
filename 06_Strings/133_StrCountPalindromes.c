//============================================================================
// Name        : 133_StrCountPalindromes.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output the number of
//				 palindromes.
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char s[40], w[15];
	int i, k, l, flag, m, p, q, count;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(s);
	l = strlen(s);
	k = 0;
	count = 0;
	for (i = 0; i <= l; i++) {
		if (s[i] != ' ') {
			w[k] = s[i];
			k++;
		} else if ((s[i] == ' ' && s[i + 1] != ' ') || (s[i] == '\0')) {
			w[k] = '\0';
			flag = 0;
			m = strlen(w);
			for (p = 0, q = m - 1; p <= q; p++, q--) {
				if (w[p] != w[q]) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				puts(w);
				count++;
			}
			k = 0;
		}
	}
	printf("No of palindromes = %d", count);

	return 1;
}
