//============================================================================
// Name        : 110_FuncNcr.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to compute Ncr. Use a function to compute n!
// Formula :: Ncr = n!/(r! * (n-r)!)
//   10c2 	= 10! / (2! * (10-8)!)
//			= 10!/(2! *  8!)
//			= (10 * 9 * 8!)/(2! *  8!)
//		  	= (10 * 9)/2 = 5 * 9 = 45
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual factorial function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a factorial method exists within the scope.
int fact(int n);

int main() {
	int n, r, p, fn, fr, fnr;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many times and number\n");
	scanf("%d %d", &n, &r);
	fn = fact(n);
	fr = fact(r);
	p = n - r;
	fnr = fact(p);
	printf("Ncr = %f\n", (double) (fn / (fr * fnr)));

	return 1;
}

int fact(int n) {
	int i, f;
	f = 1;
	for (i = 2; i <= n; i++) {
		f = f * i;
	}
	return f;
}
