//============================================================================
// Name        : 44_1DArrayOutputInputAndReverseOrder.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and output them in the
//				   input order as well as in the reverse order.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[10], i, n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 10\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", &a[i]);
	}
	printf("\nInput Order :: ");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\nReverse Order :: ");
	for (i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}

	return 1;
}
