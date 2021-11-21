//============================================================================
// Name        : 21_AllPrimesBetween1AndN.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output all prime numbers from 1 to 'n'.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, a, i, j, p;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		a = i;
		p = 0;
		for (j = 2; j <= a / 2; j++) {
			if (a % j == 0) {
				p = 1;
				break;
			}
		}
		if (p == 0) {

			printf("%d ", a);
		}
	}

	return 1;
}
