//============================================================================
// Name        : 112_FuncGCD.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a function to output the GCD of 2 given numbers.
// For eg.		p		q		r
//				25		15		10
//				15		10		5
//				10		5		0
//				5		0
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual gcd function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a gcd method exists within the scope.
void gcd(int m, int n);

int main() {
	int m, n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter 2 number\n");
	scanf("%d %d", &m, &n);
	gcd(m, n);

	return 1;
}

void gcd(int p, int q) {
	int r, t;
	if (p < q) {
		t = p;
		p = q;
		q = t;
	}
	while (q != 0) {
		r = p % q;
		p = q;
		q = r;
	}
	printf("GCD :: %d", p);

	return;
}
s