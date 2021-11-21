//============================================================================
// Name        : 05_Discriminant.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept the values of a,b,c of an
//				   algebraic equation and output the discriminant.
//				   d = b*b-4*a*c
//============================================================================

#include <stdio.h>
using namespace std;

int main() {
	int a, b, c;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	float d;
	printf("Enter values for a, b, c\n");
	scanf("%d  %d  %d", &a, &b, &c);
	d = b * b - 4 * a * c;
	printf("\nDiscriminant :: %f", d);

	return 1;
}
