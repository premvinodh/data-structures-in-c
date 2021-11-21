//============================================================================
// Name        : 13_LargestAndSmallestOfNNumbers.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and output the
// 				 largest and smallest.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int i, n, a, min, max;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers\n");
	scanf("%d", &n);
	printf("Enter first number");
	scanf("%d", &a);
	min = a;
	max = a;
	for (i = 1; i < n; i++) {
		printf("Enter next number");
		scanf("%d", &a);
		if (a > max) {
			max = a;
		}
		if (a < min) {
			min = a;
		}
	}
	printf("Maximum=%d\n", max);
	printf("Minimum=%d\n", min);

	return 1;
}
