//============================================================================
// Name        : 243_RecursiveFuncFactorial.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a recursive function to output the factorial of a
//				 number (Product of 'n' numbers)
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual recFnFact function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a recFnFact method exists within the scope.
int recFnFactorial(int k1);

int main() {
	int n, f;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a positive integer: ");
	scanf("%d", &n);
	f = recFnFactorial(n);
	printf("Factorial of %d = %d", n, f);

	return 1;
}

int recFnFactorial(int k) {
	if (k == 0) {
		return 1;
	} else {
		return k * recFnFactorial(k - 1);
	}
}
