//============================================================================
// Name        : 184_IndirectionPalindrome.c
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
	char a[20];
	int l, flag = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string...\n");
	scanf("%s", a); /* gets(a);  */
	l = strlen(a);
	for (int i = 0, j = l - 1; i <= j; i++, j--) {
		if (*(a + i) != *(a + j)) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("Palindrome");
	} else {
		printf("Not a Palindrome");
	}

	return 1;
}
