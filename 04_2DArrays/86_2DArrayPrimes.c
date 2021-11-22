//============================================================================
// Name        : 86_2DArrayPrimes.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a m*n matrix and output the
//				   prime numbers in the matrix together with the positional
//				   details.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], m, n, i, j, k, p, flag;

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
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			flag = 0;
			p = a[i][j];
			for (k = 2; k <= p / 2; k++) {
				if (p % k == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				printf("Element = %d Row = %d Column = %d\n", p, i + 1, j + 1);
			}
		}
	}

	return 1;
}
