//============================================================================
// Name        : 15_SumOfDigitsOfANumber.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to enter an integer and find the sum of its
//				 digits.
// 				 Eg., n = 26714, sum of digits = 20
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, digit, sum;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number\n");
	scanf("%d", &n);
	sum = 0;
	for (;;) {
		digit = n % 10;
		sum += digit;
		n /= 10;
		if (n == 0) {
			break;
		}
	}
	printf("Sum of digits :: %d ", sum);

	return 1;
}
