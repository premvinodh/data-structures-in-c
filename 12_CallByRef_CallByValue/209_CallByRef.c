//============================================================================
// Name        : 209_CallByRef.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to demonstrate call by reference.
//				 Output the results of the following program.
//============================================================================

#include <stdio.h>

using namespace std;

void test(int *p, int *q) {
	*p = *p + 5;
	*q = *q - 8;
	printf("\np = %d q = %d", *p, *q);
}

int main() {
	int a = 5, b = 10;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\na = %d b = %d", a, b);
	test(&a, &b);
	printf("\na = %d b = %d", a, b);

	return 1;
}
