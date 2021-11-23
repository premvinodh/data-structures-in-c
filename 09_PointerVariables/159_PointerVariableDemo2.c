//============================================================================
// Name        : 159_PointerVariableDemo2.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Output the results of the following program.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	char q = 'm';
	char *p;
	p = &q;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Content of Q = %c\n", q);
	printf("Address of Q = %u\n", &q);
	printf("Address of Q = %u\n", p);
	printf("Content of Q = %c\n", *p);
	printf("Content of Q = %c\n", *(&q));

	return 1;
}
