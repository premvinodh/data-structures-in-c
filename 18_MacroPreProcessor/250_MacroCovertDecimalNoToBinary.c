//============================================================================
// Name        : 250_MacroCovertDecimalNoToBinary.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a decimal number and convert it
//				 into binary.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int d, d1, b[10], i;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter decimal number\n");
	scanf("%d", &d);
	d1 = d;
	for (i = 0; d > 0; i++) {
		b[i] = d % 2;
		d = d / 2;
	}
	printf("Decimal Number %d\n", d1);
	printf("Binary Number ");
	for (int k = i - 1; k >= 0; k--) {
		printf("%d", b[k]);
	}

	return 1;
}
