//============================================================================
// Name        : 77_2DArrayLargestElmWithPos.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept m*n matrix and output the largest
//				 element together with the positional details.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], m, n, i, j, max, r, c;

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
		}
	}
	r = c = 0;
	max = a[0][0];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
				r = i;
				c = j;
			}
		}
	}
	printf("Largest Element :: %d\n", max);
	printf("Row, Column=%d, %d", r + 1, c + 1);

	return 1;
}
