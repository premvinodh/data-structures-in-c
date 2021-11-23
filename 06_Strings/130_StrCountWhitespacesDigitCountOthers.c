//============================================================================
// Name        : 130_StrCountWhitespacesDigitCountOthers.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to count
//					a) the number of of times each digit occurred
//					b) the number of whitespaces(blanks, newline or tabs)
//					c) the number of other characters if any.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	char c;
	int i, nw, no, nd[10];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	nw = no = 0;
	for (i = 0; i < 10; i++) {
		nd[i] = 0;
	}

	while ((c = getchar()) != EOF) { /* Ctrl+Z or F6 on windows or Terminate prg*/
		if (c >= '0' && c <= '9') {
			nd[c - '0']++;
		} else if (c == ' ' || c == '\n' || c == '\t') {
			nw++;
		} else {
			no++;
		}
	}
	printf("No. of whitespaces = %d", nw);
	printf("\nNo. of others = %d", no);
	for (i = 0; i < 10; i++) {
		printf("Digit %d occurs %d times\n", i, nd[i]);
	}

	return 1;
}
