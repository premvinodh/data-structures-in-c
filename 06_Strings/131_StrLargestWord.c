//============================================================================
// Name        : 131_StrLargestWord.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output only the
//				 largest word in that string.
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char p[40], w[15], lw[15];
	int i, k, l;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(p);
	lw[0] = '\0';
	l = strlen(p);
	k = 0;
	for (i = 0; i <= l; i++) {
		if ((p[i] == ' ' && p[i + 1] != ' ') || (p[i] == '\0')) {
			w[k] = '\0';
			if (strlen(w) > strlen(lw)) {
				strcpy(lw, w);
			}
			k = 0;
		} else {
			if (p[i] != ' ') {
				w[k] = p[i];
				k++;
			}
		}
	}
	printf("Largest word = %s", lw);

	return 1;
}
