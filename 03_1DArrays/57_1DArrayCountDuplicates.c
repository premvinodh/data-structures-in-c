//============================================================================
// Name        : 57_1DArrayCountDuplicates.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and count how many
//				   times each element is duplicating.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[14], n, i, j, k, count;

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
		count = 0;
		for (j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				count = count + 1;
				for (k = j + 1; k < n; k++) {
					a[k - 1] = a[k];
				}
				n = n - 1;
				j = j - 1;
			}
		}
		if (count > 0) {
			printf("\nElement %d occured %d times", a[i], count+1);
		}
	}
	printf("\nElements of the array after removing duplicates...");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 1;
}
