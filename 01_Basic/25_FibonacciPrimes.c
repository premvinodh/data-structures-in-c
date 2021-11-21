//============================================================================
// Name        : 25_FibonacciPrimes.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the first 'n' fibonacci primes.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, f, s, i, ne, p, j;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers");
	scanf("%d", &n);
	f = 0;
	s = 1;
	printf("%d, %d", f, s);
	for (i = 1; i <= n - 2; i++) {
		ne = f + s;
		//
		p = 0;
		for (j = 2; j <= ne / 2; j++) {
			if (ne % j == 0) {
				p = 1;
				break;
			}
		}
		if (p == 0) {
			printf(", %d", ne);
		}
		//
		f = s;
		s = ne;
	}

	return 1;
}
