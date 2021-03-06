//============================================================================
// Name        : 12_SmallestOfNNumbers.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and output the smallest.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int i, n, a, min;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers\n");
	scanf("%d", &n);
	printf("Enter first number");
	scanf("%d", &a);
	min = a;
	for (i = 1; i < n; i++) {
		printf("Enter next number");
		scanf("%d", &a);
		if (a < min) {
			min = a;
		}
	}
	printf("Minimum=%d\n", min);

	return 1;
}
