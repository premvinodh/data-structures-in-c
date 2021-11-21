//============================================================================
// Name        : 09_AlgebraicEqRoots.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the roots of an algebraic equation.
//============================================================================

#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	int a, b, c, p;
	float d, r1, r2;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter value(s) for a, b, c\n");
	scanf("%d  %d  %d", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d == 0) {
		p = 0;
	} else if (d > 0) {
		p = 1;
	} else {
		p = 2;
	}
	switch (p) {
	case 0:
		r1 = -b / (2 * a);
		r2 = r1;
		printf("Equal Roots\n");
		printf("Root1 =%f, Root2=%f", r1, r2);
		break;
	case 1:
		r1 = (-b + sqrt(d)) / (2 * a);
		r2 = (-b - sqrt(d)) / (2 * a);
		printf("Real Roots\n");
		printf("Root1 =%f, Root2=%f", r1, r2);
		break;
	case 2:
		r1 = -b / (2 * a);
		r2 = sqrt(-d) / (2 * a);
		printf("Imaginary Roots");
		printf("\nRoot1 =%f+i%f", r1, r2);
		printf("\nRoot1 =%f-i%f", r1, r2);
		break;
	}

	return 1;
}
