//============================================================================
// Name        : 65_1DArrayMerging.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform merging.
//				   Merging is the process of combining two sorted arrays.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[20], b[20], c[40], m, n, x, i, j, k;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter elements of a...Maximum 20\n");
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		printf("Enter number");
		scanf("%d", &a[i]);
	}
	printf("Enter elements of b...Maximum 20\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", &b[i]);
	}
	i = j = k = 0;
	while (i < m && j < n) {
		if (a[i] < b[j]) {
			c[k] = a[i];
			i++;
			k++;
		} else {
			c[k] = b[j];
			j++;
			k++;
		}
	}
	/* Transfer remaining elements of a if any...*/
	for (x = i; x < m; x++) {
		c[k] = a[x];
		k++;
	}
	/* Transfer remaining elements of b if any...*/
	for (x = j; x < n; x++) {
		c[k] = b[x];
		k++;
	}
	/* Display elements of c... */
	printf("Merged elements...");
	for (i = 0; i < (m+n); i++) {
		printf("%3d", c[i]);
	}

	return 1;
}
