//============================================================================
// Name        : 31_MultiplicationTablesColumnWise.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the first 'n' multiplication
//				 tables. (Displays each numbered multiplication table one
//				 after the other horizontally as 3 columns.)
//				1 * 1 = 1		2 * 1 = 2		3 * 1 = 3
//				1 * 2 = 2		2 * 2 = 4		3 * 2 = 6
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int i, j, n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers (multiples of 3)\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i=i+3) {
		for (j = 1; j <= 12; j++) {
			printf("\n%2d * %2d=%3d", i, j, i*j);
			printf("\t\t%2d * %2d=%3d", i+1, j+1, (i+1)*(j+1));
			printf("\t\t%2d * %2d=%3d", i+2, j+2, (i+2)*(j+2));
		}
		printf("\n\n");
	}

	return 1;
}
