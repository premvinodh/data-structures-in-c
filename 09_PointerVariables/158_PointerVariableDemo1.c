//============================================================================
// Name        : 158_PointerVariableDemo1.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Output the results of the following program.
// 
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int v = 5;
	int *p;
	p = &v;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Content of V = %d\n", v);
	printf("Address of V = %u\n", &v);
	printf("Address of V = %u\n", p);
	printf("Content of V = %d\n", *p);
	printf("Content of V = %d\n", *(&v));

	return 1;
}
