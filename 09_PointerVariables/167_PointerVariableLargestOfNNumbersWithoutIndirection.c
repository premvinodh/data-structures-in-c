//============================================================================
// Name        : 167_PointerVariableLargestOfNNumbersWithoutIndirection.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and output the largest.
//				 Do not use indirection with arrays.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[20], max, n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
// First way of accepting an array
	for (int i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", &a[i]);
	}
	max = a[0];
// First way of processing an array
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("Maximum :: %d\n", max);

	return 1;
}
