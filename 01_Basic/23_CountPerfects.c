//============================================================================
// Name        : 23_CountPerfects.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and count how many
//				 are perfect.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int np, n, i, a, s, j;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers");
	scanf("%d", &n);
	np = 0;
	for (i = 1; i <= n; i++) {
		printf("Enter number");
		scanf("%d", &a);
		s = 0;
		for (j = 1; j <= a / 2; j++) {
			if (a % j == 0) {
				s += j;
			}
		}
		if (s == a) {
			np += 1;
		}
	}
	printf("Number of perfect = %d", np);

	return 1;
}
