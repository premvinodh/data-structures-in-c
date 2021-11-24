//============================================================================
// Name        : 193_IndirectionLargestWordInAString.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output the largest
//				   word in the string. (Use indirection.)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char a[40], lw[40], w[40];
	int l, i, j;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string...\n");
	// This is required because scanf("%s", s) has no buffer overflow protection
	// and hence it only takes the first word and ignores the remaining words.
	// This example uses an inverted scanset
	scanf("%[^\n]s", a); /* gets(a);  */
	l = strlen(a);
	j = 0;
	lw[0] = '\0';
	for (i = 0; i <= l; i++) {
		if ((*(a + i) == ' ' && *(a + i + 1) != ' ') || (*(a + i) == '\0')) {
			w[j] = '\0';
			if (strlen(w) > strlen(lw)) {
				strcpy(lw, w);
			}
			j = 0;
		} else {
			if (*(a + i) != ' ') {
				w[j] = *(a + i);
				j++;
			}
		}
	}
	printf("Largest word = %s\n", lw);

	return 1;
}
