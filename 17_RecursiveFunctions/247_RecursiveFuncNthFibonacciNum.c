//============================================================================
// Name        : 247_RecursiveFuncNthFibonacciNum.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a recursive function to output the 'nth' fibonacci num.
// 1, 2, 3, 5, 8, 13, 21, 34...
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual recFnNthFibonacciNumber function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a recFnNthFibonacciNumber method exists within the scope.
int recFnNthFibonacciNumber(int k1);

int main() {
	int n, f;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter which position number: ");
	scanf("%d", &n);
	f = recFnNthFibonacciNumber(n);
	printf("Fibonacci Number at position %d = %d", n, f);

	return 1;
}

int recFnNthFibonacciNumber(int k) {
	if (k <= 1) {
		return 1;
	} else {
		return recFnNthFibonacciNumber(k - 1) + recFnNthFibonacciNumber(k - 2);
	}
}
