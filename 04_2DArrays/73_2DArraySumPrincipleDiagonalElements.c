//============================================================================
// Name        : 73_2DArraySumPrincipleDiagonalElements.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept m*n matrix and output the sum of
//			     all its principle diagonal elements.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], m, n, i, j, sum = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many rows...Maximum 1..5\n");
	scanf("%d", &m);
	printf("Enter how many columns...Maximum 1..5\n");
	scanf("%d", &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("Enter element");
			scanf("%d", &a[i][j]);
			if (i == j) {
				sum += a[i][j];
			}
		}
	}
	printf("Sum of principle diagonal elements :: %d", sum);

	return 1;
}
