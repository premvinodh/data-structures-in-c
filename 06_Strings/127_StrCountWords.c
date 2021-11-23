//============================================================================
// Name        : 127_StrCountWords.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output the number of
//				 words in it.
//============================================================================

#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char s[40];
	int i, l, nw;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(s); /* scanf("%s", s); // scanf does not work with spaces. */
	nw = 0;
	l = strlen(s);
	for (i = 0; i <= l; i++) {
		if ((s[i] == ' ' && s[i + 1] != ' ') || (s[i] == '\0')) {
			nw += 1;
		}
	}
	printf("No of words = %d", nw);

	return 1;
}
