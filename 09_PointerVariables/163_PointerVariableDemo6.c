//============================================================================
// Name        : 163_PointerVariableDemo6.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Output the results of the following program.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[7] = { 14, 24, -5, 8, 21, 0, 7 };
	int *p;
	p = &a[0]; 

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 7; i++) {
		printf("Address = %u Content = %d \n", p, *p);
		p++;
	}

	return 1;
}
