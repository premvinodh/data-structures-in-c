//============================================================================
// Name        : 161_PointerVariableDemo4.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Output the results of the following program.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	float q = 14.56;
	float *p;
	p = &q;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Content of Q = %f\n", *p);
	printf("Address of Q = %u\n", p);
	p++;
	printf("Next Address after increment = %u\n", p);

	return 1;
}
