//============================================================================
// Name        : 82_2DArrayLowerTriangular.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept square matrix m*m and output
//				 whether it is lower triangular or not.
//				 Lower triangular :: if all the elements above the diagonal
//				 are zero then the matrix is called lower triangular
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], m, i, j, flag = 0;

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
			if ((i < j) && a[i][j] != 0) {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1) {
		printf("Matrix is not lower triangular...");
	} else {
		printf("Matrix is lower triangular...");
	}

	return 1;
}
