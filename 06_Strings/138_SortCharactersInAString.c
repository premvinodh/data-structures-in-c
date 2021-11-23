//============================================================================
// Name        : 138_SortCharactersInAString.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a name as a string and sort the
//				 individual characters in the string.
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char s[30], temp;
	int n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string");
	gets(s);
	n = strlen(s);
	//
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (s[i] > s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	//
	printf("Sorted String ::");
	puts(s);

	return 1;
}
