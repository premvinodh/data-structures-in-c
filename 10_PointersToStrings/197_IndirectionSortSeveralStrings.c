//============================================================================
// Name        : 197_IndirectionSortSeveralStrings.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to sort several strings.
//				 (Use indirection.)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char s[30][40], temp[40];
	int n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many strings...\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter a string...\n");
		scanf("%s", s + i); /* gets(s+i);  */
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(*(s + i), *(s + j)) > 0) {
				strcpy(temp, *(s + i));
				strcpy(*(s + i), *(s + j));
				strcpy(*(s + j), temp);
			}
		}
	}
	printf("Sorted order of strings\n");
	for (int i = 0; i < n; i++) {
		printf("%s\n", s[i]);
	}

	return 1;
}
