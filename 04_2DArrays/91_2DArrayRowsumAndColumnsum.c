//============================================================================
// Name        : 91_2DArrayRowsumAndColumnsum.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept m*n matrix and output the row sum
//				 and column sum.
//  For eg.  4*4 matrix
//				4	0	1	2	=	7
//				3	4	2	1	=  10
//				4	3	2	4	=  13
//				11	7	5	7	=  30
//				=	=	=	=
//			   22  14  10  14
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], m, n, i, j, rs, cs;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many rows...Maximum 1..4\n");
	scanf("%d", &m);
	printf("Enter how many columns...Maximum 1..4\n");
	scanf("%d", &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("Enter elements of matrix a");
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++) {
		rs = 0;
		for (j = 0; j < n; j++) {
			rs += a[i][j];
		}
		a[i][n] = rs;
	}
	for (j = 0; j < n; j++) {
		cs = 0;
		for (i = 0; i < m; i++) {
			cs += a[i][j];
		}
		a[m][j] = cs;
	}
	for (i = 0; i <= m; i++) {
		for (j = 0; j <= n; j++) {
			if (i != m || j != n) {
				printf("%d ", a[i][j]);
			}
		}
		printf("\n");
	}

	return 1;
}
