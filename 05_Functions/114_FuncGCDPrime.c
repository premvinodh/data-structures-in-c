//============================================================================
// Name        : 114_FuncGCDPrime.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a function to output the GCD of 2 given numbers.
//				 Use a sub-sub function to decide whether the GCD of those
//				 numbers is prime.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual gcd2, prime1 functions is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a gcd2, prime1 methods exists within the scope.
void gcd2(int m, int n);
void prime1(int n);

int main() {
	int m, n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter 2 number\n");
	scanf("%d %d", &m, &n);
	gcd2(m, n);

	return 1;
}

void gcd2(int p, int q) {
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
	prime1(p);

	return;
}

void prime1(int x) {
	int i, q, flag = 0;
	q = x / 2;
	for (i = 2; i <= q; i++) {
		if (x % i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("\nThe number is prime.");
	} else {
		printf("\nThe number is not prime.");
	}

	return;
}
