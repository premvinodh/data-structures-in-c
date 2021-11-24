//============================================================================
// Name        : 246_RecursiveFuncSumOfDigitsOfANumber.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a recursive function to compute the sum of digits of a
//				 number 'n'.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual recFnSumOfDigits function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a recFnSumOfDigits method exists within the scope.
int recFnSumOfDigits(int k1);

int main() {
	int n, sum;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter value for n: ");
	scanf("%d", &n);
	sum = recFnSumOfDigits(n);
	printf("Sum of digits of a number = %d", sum);

	return 1;
}

int recFnSumOfDigits(int k) {
	if (k == 0) {
		return 0;
	} else {
		return k % 10 + recFnSumOfDigits(k / 10);
	}
}
