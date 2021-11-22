//============================================================================
// Name        : 93_ReplaceNonPrimesWithZeroInAMatrix.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept square matrix and perform the foll:-
//				   a) replace all non prime numbers with zero.
//				   b) output the result in matrix form.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int m, a[5][5], q, flag;

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
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			flag = 0;
			q = a[i][j];
			for (int k = 2; k <= q / 2; k++) {
				if (q % k == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				a[i][j] = 0;
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

	return 1;
}
