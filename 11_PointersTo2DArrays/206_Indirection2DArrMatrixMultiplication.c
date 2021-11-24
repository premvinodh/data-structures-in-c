//============================================================================
// Name        : 206_Indirection2DArrMatrixMultiplication.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept two matrices and output their sum
//				 (With indirection.)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], b[5][5], c[5][5];
	int m, n, p, q;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many rows in a...Maximum 5\n");
	scanf("%d", &m);
	printf("Enter how many columns in a...Maximum 5\n");
	scanf("%d", &n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("Enter an element into array a ::");
			scanf("%d", a[i] + j);
		}
	}
	printf("Enter how many rows in b...Maximum 5\n");
	scanf("%d", &p);
	printf("Enter how many columns in b...Maximum 5\n");
	scanf("%d", &q);
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < q; j++) {
			printf("Enter an element into array b ::");
			scanf("%d", b[i] + j);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			*(c[i] + j) = 0;
		}
	}
	if (n != p) {
		printf("Matrix multiplication is not possible");
	} else {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < q; j++) {
				for (int k = 0; k < n; k++) {
					*(c[i] + j) += (*(a[i] + k)) * (*(b[k] + j));
				}
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			printf("%3d", *(c[i] + j));
		}
		printf("\n");
	}
	return 1;
}
