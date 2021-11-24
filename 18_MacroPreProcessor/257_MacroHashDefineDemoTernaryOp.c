//============================================================================
// Name        : 257_MacroHashDefineDemoTernaryOp.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program using ternary operator as macro in C.
//============================================================================

#include <stdio.h>
#define max(a, b) (a > b ? a : b)

using namespace std;

int main() {
	int p, q, k;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter two numbers\n");
	scanf("%d %d", &p, &q);
	k = max(p, q);
	printf("Maximum = %d", k);

	return 1;
}
