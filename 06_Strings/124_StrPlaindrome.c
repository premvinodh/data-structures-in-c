//============================================================================
// Name        : 124_StrPlaindrome.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output whether it is
//				   a palindrome or not.
//============================================================================

#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char p[40];
	int i, j, l, flag;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(p);
	flag = 0;
	l = strlen(p);
	for (i = 0, j = l - 1; i <= j; i++, j--) {
		if (p[i] != p[j]) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("String is palindrome");
	} else {
		printf("String is not palindrome");
	}

	return 1;
}
