//============================================================================
// Name        : 14_FibonacciSeries.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the first 'n' fibonacci numbers.
// 				 (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ....)
//	              f  s  ne
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int i, f, s, n, ne;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers\n");
	scanf("%d", &n);
	f = 0;
	s = 1;
	printf("%d, %d", f, s);
	for (i = 0; i < n - 2; i++) {
		ne = f + s;
		printf(", %d", ne);
		f = s;
		s = ne;
	}

	return 1;
}
