//============================================================================
// Name        : 46_1DArrayMaximumMinimum.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and output the maximum
//				 and minimum.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[10], i, n, max, min;

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
	max = a[0];
	min = a[0];
	for (i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		} else if (a[i] < min) {
			min = a[i];
		}
	}
	printf("Maximum :: %d\n", max);
	printf("Minimum :: %d\n", min);

	return 1;
}
