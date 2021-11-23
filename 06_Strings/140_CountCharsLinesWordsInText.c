//============================================================================
// Name        : 140_CountCharsLinesWordsInText.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to count
//				 a) number of characters
//				 b) number of lines
//				 c) number of words, in a given text (textfile).
//			NOT WORKING... Please check.
//============================================================================

#include <stdio.h>
#define YES 1
#define NO 0

using namespace std;

int main() {
	int c, nl, nw, nc, inword;
	inword = NO;
	nl = nw = nc = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while ((c = getchar()) != EOF) {
		nc++;
		if (c == '\n') {
			nl++;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			inword = NO;
		} else {
			if (inword == NO) {
				inword = YES;
				nw++;
			}
		}
	}
	printf("%d %d %d\n", nc, nw, nl);

	return 1;
}
