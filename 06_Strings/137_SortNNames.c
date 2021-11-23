//============================================================================
// Name        : 137_SortNNames.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept the names of 'n' names, sort them
//				 and output the result.
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

	printf("Enter how many names \n");
	scanf("%d", &n);
	//
	printf("Accepting the names of '%d' students\n", n);
	for (int i = 0; i < n; i++) {
		printf("Give a student name %d", i + 1);
		scanf("%s", s[i]); /* for strings we do not give &s[i] */
	}
	//
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(s[i], s[j]) > 0) {
				strcpy(temp, s[i]);
				strcpy(s[i], s[j]);
				strcpy(s[j], temp);
			}
		}
	}
	//
	printf("Displaying the names of '%d' students in sorted order\n", n);
	for (int i = 0; i < n; i++) {
		printf("Student name %d %s\n", (i + 1), s[i]);
	}

	return 1;
}
