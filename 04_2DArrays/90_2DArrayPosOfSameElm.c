//============================================================================
// Name        : 90_2DArrayPosOfSameElm.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept two matrices a, b of order m*n each
//			 	 and output the position of row and column wherever the
//				 corresponding elements are equal.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], b[5][5], m, n, i, j;

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
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] == b[i][j]) {
				printf("%d %d\n", i + 1, j + 1);
			}
		}
	}

	return 1;
}
