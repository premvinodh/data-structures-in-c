//============================================================================
// Name        : 34_ArithmeticOperationsUsingCasting.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the values of the variables
//		         p and q. Use casting.
//============================================================================

#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	int a, b;
	float c, d;
	float p, q;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	a = 10;
	b = 20;
	c = 100.5;
	d = 20.5;

	p = a + b;
	printf("a+b=%f", p);

	p = c + d;
	printf("\nc+d=%f", p);

	p = int(a) + int(b);
	printf("\nint(a) + int(b)=%f", p);

	p = int(a + b);
	printf("\nint(a + b)=%f", p);

	q = (int) c % (int) d;
	printf("\n(int) c % (int) d=%f", q);

	return 1;
}
