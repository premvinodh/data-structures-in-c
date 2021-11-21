//============================================================================
// Name        : 45_1DArrayLinearSearch.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform linear search.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[10], i, n, p, flag = 0;

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
	printf("\nGive search value ::");
	scanf("%d", &p);
	for (i = 0; i < n; i++) {
		if (a[i] == p) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("Search unsuccess");
	} else {
		printf("Search success at location %d", i + 1);
	}

	return 1;
}
