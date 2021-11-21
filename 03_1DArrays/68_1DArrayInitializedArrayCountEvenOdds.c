//============================================================================
// Name        : 68_1DArrayInitializedArrayCountEvenOdds.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to utput the count of even and odd numbers
//				   of an array whose elements are {1, 4, 2, 3, 6, 8}
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[] = { 1, 4, 2, 3, 6, 8 };
	int no = 0, ne = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 6; i++) {
		if (a[i] % 2 == 0) {
			ne++;
		} else {
			no++;
		}
	}
	printf("No of Odds = %d No of Evens = %d", no, ne);

	return 1;
}
