//============================================================================
// Name        : 58_1DArrayDeleteElmFromPos.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and delete an element
//			     from the given position.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[14], n, i, j, p;

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
	printf("Enter position number");
	scanf("%d", &p);
	p = p - 1;
	for (j = p + 1; j < n; j++) {
		a[j - 1] = a[j];
	}
	n = n - 1;
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 1;
}
