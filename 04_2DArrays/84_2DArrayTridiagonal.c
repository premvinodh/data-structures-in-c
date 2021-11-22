//============================================================================
// Name        : 84_2DArrayTridiagonal.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept square matrix m*m and output
//				 whether it is tridiagonal or not.
//				 Tridiagonal :: if all the elements other than the principal
//				 diagonal and one more diagonal above and below the principal
//				 diagonal are zeros then the matrix is called tridiagonal.
// Eg.		1	4	0	0		11	12	13	14
//			3	4	1	0		21	22	23	24	
//			0 	2 	3	4		31	32	33	34
//			0	0	1	3		41	42	43	44
//============================================================================

#include <stdio.h>
#include <stdlib.h>

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
			if (abs(i - j) >= 2 && a[i][j] != 0) {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1) {
		printf("Matrix is not tridiagonal...");
	} else {
		printf("Matrix is tridiagonal...");
	}

	return 1;
}
