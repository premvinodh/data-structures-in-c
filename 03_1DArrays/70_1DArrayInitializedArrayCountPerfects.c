//============================================================================
// Name        : 70_1DArrayInitializedArrayCountPerfects.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the count of perfect numbers
//				 of an array whose elements are {1, 4, 2, 3, 6, 8}
// Perfect Number ::
//				Given a number 'a' check whether it is a perfect number or not.
//				 A number k whose factors are taken upto k/2 and then the
//			     factors are added, if the sum of the factors is equal to k,
//				 then it is a perfect number.
//				 Eg., 6, 28, 496, 8128
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[] = { 1, 4, 2, 3, 6, 28 };
	int np = 0, s;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 6; i++) {
		s = 0;
		for (int j = 1; j <= a[i] / 2; j++) {
			if (a[i] % j == 0) {
				if (a[i] % j == 0) {
					s += j;
				}
			}
		}
		if (s == a[i]) {
			np++;
		}
	}
	printf("No of Perfects = %d", np);

	return 1;
}
