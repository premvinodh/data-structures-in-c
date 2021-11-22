//============================================================================
// Name        : 85_2DArrayTridiagonalSum.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept square matrix m*m and output the
//				 tridiagonal sum.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int a[5][5], m, i, j, sum = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many rows and columns...Maximum 1..5\n");
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("Enter element");
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			if (abs(i - j) < 2) {
				sum += a[i][j];
			}
		}
	}
	printf("Tridiagonal sum = %d", sum);

	return 1;
}
