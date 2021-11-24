//============================================================================
// Name        : 186_IndirectionCountWordsInAString.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and count the number of
//				 words in it. (Use indirection.)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char a[20];
	int l, nw;

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
	nw = 0;
	for (int i = 0; i <= l; i++) {
		if ((*(a + i) == ' ' && *(a + i + 1) != ' ') || (*(a + i) == '\0')) {
			nw++;
		}
	}
	printf("Number of words = %d", nw);

	return 1;
}
