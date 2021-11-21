//============================================================================
// Name        : 18_Palindrome.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept an integer and check whether it is
//				 a palindrome or not.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, d, r, m;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number\n");
	scanf("%d", &n);
	m = n;
	r = 0;
	for (;;) {
		d = n % 10;
		r = r * 10 + d;
		n /= 10;
		if (n == 0) {
			break;
		}
	}
	if (m == r) {
		printf("Palindrome");
	} else {
		printf("Not a Palindrome");
	}

	return 1;
}
