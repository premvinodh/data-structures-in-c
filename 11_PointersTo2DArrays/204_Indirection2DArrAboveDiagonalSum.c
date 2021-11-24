//============================================================================
// Name        : 204_Indirection2DArrAboveDiagonalSum.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a matrices and output the sum of
//				 the elements above diagonal. (With indirection.)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5];
	int m, n, sum;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many rows...Maximum 5\n");
	scanf("%d", &m);
	printf("Enter how many columns...Maximum 5\n");
	scanf("%d", &n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("Enter an element into array a ::");
			scanf("%d", a[i] + j);
		}
	}
	sum = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				sum += *(a[i] + j);
			}
		}
	}
	printf("Sum of all elements above diagonal = %d", sum);

	return 1;
}
