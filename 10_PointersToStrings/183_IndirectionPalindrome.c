//============================================================================
// Name        : 183_IndirectionPalindrome.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and print whether it is a
//				 Palindrome or not. (Use indirection.)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char a[20], *p, *q;
	int l, flag = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string...\n");
	scanf("%s", a); /* gets(a);  */
	l = strlen(a);
	p = a + (l - 1);
	q = a;
	for (int i = 0; i < l; i++) {
		if (*p != *q) {
			flag = 1;
			break;
		}
		q++;
		p--;
	}
	if (flag == 0) {
		printf("Palindrome");
	} else {
		printf("Not a Palindrome");
	}

	return 1;
}
