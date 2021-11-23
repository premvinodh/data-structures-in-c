//============================================================================
// Name        : 169_PointerVariableLargestOfNNumbers.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and output the largest.
//				 Use indirection with arrays.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[20], max, n, *p;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
	// Third way of accepting an array
	p = a;
	for (int i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", p);
		p++;
	}
	p = a;
	max = *p;
	// Third way of processing an array
	for (int i = 1; i < n; i++) {
		// required because max = p[0], and we need to access the next location
		p++;
		if (*p > max) {
			max = *p;
		}
	}
	printf("Maximum :: %d\n", max);

	return 1;
}
