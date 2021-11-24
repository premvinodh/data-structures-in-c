//============================================================================
// Name        : 244_RecursiveFuncNCR.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a recursive function to output the Ncr.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual recFnFactorial function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a recFnFactorial method exists within the scope.
int recFnFactorial(int k1);

int main() {
	int n, r, fn, fr, q, fq;
	float ncr;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter value for n: ");
	scanf("%d", &n);
	printf("Enter value for r: (R should be less than N) ");
	scanf("%d", &r);
	fn = recFnFactorial(n);
	fr = recFnFactorial(r);
	q = n - r;
	fq = recFnFactorial(q);
	ncr = fn / (fr * fq);
	printf("Ncr = %f", ncr);

	return 1;
}

int recFnFactorial(int k) {
	if (k == 0) {
		return 1;
	} else {
		return k * recFnFactorial(k - 1);
	}
}
