//============================================================================
// Name        : 56_1DArrayDeleteDuplicates.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and delete all
//				 duplicate elements in it and output the remaining list.
//				 Delete a number occuring more than once.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[14], n, i, j, k;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 14\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				for (k = j + 1; k < n; k++) {
					a[k - 1] = a[k];
				}
				n = n - 1;
				j = j - 1;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 1;
}
