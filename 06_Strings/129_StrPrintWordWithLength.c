//============================================================================
// Name        : 129_StrPrintWordWithLength.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output each word
//				 separately along with its length.
//============================================================================

#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char s[40], w[40];
	int i, j, l, l1;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(s);
	l = strlen(s);
	j = 0;
	for (i = 0; i <= l; i++) {
		if ((s[i] == ' ' && s[i + 1] != ' ') || (s[i] == '\0')) {
			w[j] = '\0';
			l1 = strlen(w);
			printf("%s %d\n", w, l1);
			j = 0;
		} else {
			if (s[i] != ' ') {
				w[j] = s[i];
				j++;
			}
		}
	}

	return 1;
}
