//============================================================================
// Name        : 251_MacroCovertBinaryToDecimal.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a binary number and convert it
//				 into decimal number.
//============================================================================

#include <stdio.h>

using namespace std;

int pow2(int k) {
	int fk = 1;
	for (int i = 1; i <= k; i++) {
		fk = fk * 2;
	}
	return fk;
}

int main() {
	int b, d, b1, i;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter binary number\n");
	scanf("%d", &b);
	b1 = b;
	d = 0;
	i = 0;
	while (b > 0) {
		d = d + (b % 10) * pow2(i);
		b = b / 10;
		i = i + 1;
	}
	printf("Binary Number %d\n", b1);
	printf("Decimal Number %d\n", d);

	return 1;
}
