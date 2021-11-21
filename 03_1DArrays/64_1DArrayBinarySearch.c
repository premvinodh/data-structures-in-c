//============================================================================
// Name        : 64_1DArrayBinarySearch.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform binary search.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[10], n, i, p, top, bott, mid, flag = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 10\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", &a[i]);
	}
	printf("Enter search number");
	scanf("%d", &p);
	top = 0;
	bott = n - 1;
	while (top <= bott) {
		mid = (top + bott) / 2;
		if (p == a[mid]) {
			flag = 1;
			break;
		} else {
			if (p > a[mid]) {
				top = mid + 1;
			} else if (p < a[mid]) {
				bott = mid - 1;
			}
		}
	}
	if (flag == 1) {
		printf("Search success at location %d", (mid + 1));
	} else {
		printf("Search unsuccess");
	}

	return 1;
}
