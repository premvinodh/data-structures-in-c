//============================================================================
// Name        : 215_DMAFactorial.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to compute factorial 'n' which returns result
//				 using reference parameter. (Use dynamic memory allocation)
//============================================================================

#include <stdio.h>

using namespace std;

void fact(int k, int *fk) {
	for (int i = 2; i <= k; i++) {
		*fk = (*fk) * i;
	}

	return;
}

int main() {
	int n, fn;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter element...\n");
	scanf("%d", &n);
	fn = 1;
	fact(n, &fn);
	printf("Factorial of N = %d", fn);

	return 1;
}
