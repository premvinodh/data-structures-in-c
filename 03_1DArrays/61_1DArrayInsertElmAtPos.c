//============================================================================
// Name        : 61_1DArrayInsertElmAtPos.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and insert an element
//			     'k' at position 'p' in the array.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[12], n, i, j, k, p;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 12\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", &a[i]);
	}
	printf("Enter insertion value and position");
	scanf("%d %d", &k, &p);
	/* array starts at location 0 in C */

	p = p - 1;
	for (j = n - 1; j >= p; j--) {
		a[j + 1] = a[j];
	}
	n = n + 1;
	a[p] = k;
	printf("Elements of the array of inserting value %d at location :: %d\n", k, p);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 1;
}
