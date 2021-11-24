//============================================================================
// Name        : 213_DMASumOfDigitsOfANum.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept an integer and output the sum of
//			 	 all digits of an integer. Output the result using call be ref.
//				 (Use dynamic memory allocation)
//============================================================================

#include <stdio.h>

using namespace std;

void digitSum(int k, int *p) {
	int d, s1;
	s1 = 0;
	while (k != 0) {
		d = k % 10;
		s1 += d;
		k /= 10;
	}
	*p = s1;
	return;
}

int main() {
	int n, sum;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter element...\n");
	scanf("%d", &n);
	digitSum(n, &sum);
	printf("Sum = %d", sum);

	return 1;
}
