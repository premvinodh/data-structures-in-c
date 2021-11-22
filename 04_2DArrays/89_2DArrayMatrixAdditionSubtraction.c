//============================================================================
// Name        : 89_2DArrayMatrixAdditionSubtraction.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept the elements into 2 m*n matrices
//			 	 and output their sum and difference.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], b[5][5], c[5][5], d[5][5], m, n, i, j;

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
			printf("Enter elements of matrix a");
			scanf("%d", &a[i][j]);
			printf("Enter elements of matrix b");
			scanf("%d", &b[i][j]);
			c[i][j] = a[i][j] + b[i][j];
			d[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("Matrix Addition\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}
	printf("Matrix Subtraction\n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d", d[i][j]);
		}
		printf("\n");
	}

	return 1;
}
