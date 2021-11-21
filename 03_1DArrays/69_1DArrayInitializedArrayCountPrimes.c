//============================================================================
// Name        : 69_1DArrayInitializedArrayCountPrimes.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the count of prime numbers
//				 of an array whose elements are {1, 4, 2, 3, 6, 8}
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[] = { 1, 4, 2, 3, 6, 8 };
	int np = 0, q, flag;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 6; i++) {
		flag = 0;
		q = a[i] / 2;
		for (int j = 2; j <= q; j++) {
			if (a[i] % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			np++;
		}
	}
	printf("No of Primes = %d", np);

	return 1;
}
