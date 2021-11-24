//============================================================================
// Name        : 207_Indirection2DArrPrintPrimes.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a matrice and output all prime
//				 numbers in it. (With indirection.)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5];
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
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			p = 0;
			q = *(a[i] + j) / 2;
			for (int k = 2; k <= q; k++) {
				if (*(a[i] + j) % k == 0) {
					p = 1;
					break;
				}
			}
			if (p == 0) {
				printf("Prime = %d\n", *(a[i] + j));
			}
		}
	}

	return 1;
}
