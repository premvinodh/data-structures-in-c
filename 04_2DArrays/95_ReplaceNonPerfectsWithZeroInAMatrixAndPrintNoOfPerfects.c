//============================================================================
// Name        : 95_ReplaceNonPerfectsWithZeroInAMatrixAndPrintNoOfPerfects.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept square matrix and perform the foll:-
//				 a) replace all non perfect numbers with zero.
//				 b) output the result in matrix form.
//				 c) also output the number of perfects
// Perfect Number::
// 		Is a positive integer that is equal to the sum of its proper divisors.
//		The smallest perfect number is 6, which is the sum of 1, 2, and 3.
//		Other perfect numbers are 28, 496, and 8,128.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int m, a[5][5], q, sum, np;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many rows...Maximum 5\n");
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			printf("Enter element");
			scanf("%d", &a[i][j]);
		}
	}
	np = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			sum = 0;
			q = a[i][j];
			for (int k = 1; k <= q / 2; k++) {
				if (q % k == 0) {
					sum += k;
				}
			}
			if (sum != q) {
				a[i][j] = 0;
			} else {
				np++;
			}
		}
	}
	printf("Printing m*m matrix...\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("Number of perfects :: %d", np);

	return 1;
}
