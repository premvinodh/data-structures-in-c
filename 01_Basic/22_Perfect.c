//============================================================================
// Name        : 22_Perfect.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Given a number 'a' check whether it is a perfect number or not.
//				 A number k whose factors are taken upto k/2 and then the
//			     factors are added, if the sum of the factors is equal to k,
//				 then it is a perfect number.
//				 Eg., 6, 28, 496, 8128
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a, s, j;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number");
	scanf("%d", &a);
	s = 0;
	for (j = 1; j <= a / 2; j++) {
		if (a % j == 0) {
			s += j;
		}
	}
	if (s == a) {
		printf("Number is perfect");
	} else {
		printf("Number is not perfect");
	}

	return 1;
}
