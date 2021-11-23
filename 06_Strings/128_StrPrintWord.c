//============================================================================
// Name        : 128_StrPrintWord.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output each word
//				 separately.
//============================================================================

#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char p[50], w[50];
	int i, k, l;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(p);
	l = strlen(p);
	k = 0;
	for (i = 0; i <= l; i++) {
		if ((p[i] == ' ' && p[i + 1] != ' ') || (p[i] == '\0')) {
			w[k] = '\0';
			puts(w);
			k = 0;
		} else {
			if (p[i] != ' ') {
				w[k] = p[i];
				k++;
			}
		}
	}

	return 1;
}
