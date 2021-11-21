//============================================================================
// Name        : 30_MultiplicationTables.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the first 'n' multiplication
//				   tables. (Displays each numbered multiplication table one 
//				   after the other vertically.)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int i, j, n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 12; j++) {
			printf("\n%2d * %2d=%3d", i, j, i*j);
		}
		printf("\n\n");
	}

	return 1;
}
