//============================================================================
// Name        : 24_AllPerfectsBetween1AndN.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output all perfect numbers from 1 to 'n'.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, i, a, s, j;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		a = i;
		s = 0;
		for (j = 1; j <= a / 2; j++) {
			if (a % j == 0) {
				s += j;
			}
		}
		if (s == a) {
			printf("%d ", a);
		}
	}

	return 1;
}
