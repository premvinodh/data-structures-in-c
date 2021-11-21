//============================================================================
// Name        : 66_1DArrayInitializedArraySum.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept output the sum of an array whose
//				 elements are {1, 4, 2, 3, 6, 8}
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[] = { 1, 4, 2, 3, 6, 8 };
	int sum = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 6; i++) {
		sum = sum + a[i];
	}
	printf("Sum = %d", sum);

	return 1;
}
