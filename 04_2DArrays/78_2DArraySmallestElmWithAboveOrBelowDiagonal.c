//============================================================================
// Name        : 78_2DArraySmallestElmWithAboveOrBelowDiagonal.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept m*n matrix and output the smallest
//				 element.  Also display a message whether it is above diagonal,
//				 below diagonal or along diagonal.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], m, n, i, j, min, r, c;

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
	min = a[0][0];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] < min) {
				min = a[i][j];
				r = i;
				c = j;
			}
		}
	}
	printf("Smallest Element :: %d\n", min);
	printf("Row, Column=%d, %d\n", r + 1, c + 1);
	if (r < c) {
		printf("Above diagonal");
	} else if (r > c) {
		printf("Below diagonal");
	} else if (r == c) {
		printf("Along diagonal");
	}

	return 1;
}
