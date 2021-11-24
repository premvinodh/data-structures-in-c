//============================================================================
// Name        : 253_MacroCovertDecimalNoToHexadecimal.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a decimal number and convert it
//				 into hexa-decimal.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int d, d1, i, m;
	char b[10];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter decimal number\n");
	scanf("%d", &d);
	d1 = d;
	for (i = 0; d > 0; i++) {
		m = d % 16;
		if (m < 10) {
			b[i] = m;
		} else if (m == 10) {
			b[i] = 'A';
		} else if (m == 11) {
			b[i] = 'B';
		} else if (m == 12) {
			b[i] = 'C';
		} else if (m == 13) {
			b[i] = 'D';
		} else if (m == 14) {
			b[i] = 'E';
		} else if (m == 15) {
			b[i] = 'F';
		}
		d = d / 16;
	}
	printf("Decimal Number %d\n", d1);
	printf("Hexadecimal Number ");
	for (int k = i - 1; k >= 0; k--) {
		printf("%d", b[k]);
	}

	return 1;
}
