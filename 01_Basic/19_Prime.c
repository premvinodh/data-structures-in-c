//============================================================================
// Name        : 19_Prime.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept an integer and check whether it is
//				 a prime or not.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, p, i;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number\n");
	scanf("%d", &n);
	p = 0;
	for (i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			p = 1;
			break;
		}
	}
	if (p == 0) {
		printf("Number is Prime");
	} else {
		printf("Number is not Prime");
	}

	return 1;
}
