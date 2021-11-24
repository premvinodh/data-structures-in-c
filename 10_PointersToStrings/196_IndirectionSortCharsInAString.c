//============================================================================
// Name        : 196_IndirectionSortCharsInAString.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and sort individual
//				 characters in the string. (Use indirection.)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char s[40], temp;
	int l;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string...\n");
	// This is required because scanf("%s", s) has no buffer overflow protection
	// and hence it only takes the first word and ignores the remaining words.
	// This example uses an inverted scanset
	scanf("%[^\n]s", s); /* gets(s);  */
	l = strlen(s);
	for (int i = 0; i < l - 1; i++) {
		for (int j = i + 1; j < l; j++) {
			if (*(s + i) > *(s + j)) {
				temp = *(s + i);
				*(s + i) = *(s + j);
				*(s + j) = temp;
			}
		}
	}
	printf("Sorted characters in the string = %s\n", s);

	return 1;
}
