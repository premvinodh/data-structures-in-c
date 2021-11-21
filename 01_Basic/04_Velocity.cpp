//============================================================================
// Name        : 04_Velocity.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the values of v, s by accepting
//				   the inputs u, a, t.
//				   v = u + at
//				   s = ut + (1/2)at^2
//============================================================================

#include <stdio.h>
using namespace std;

int main() {
	float u, a, t, v, s;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter values for u, a, t\n");
	scanf("%f  %f  %f", &u, &a, &t);
	v = u + a * t;
	s = u * t + (1 / 2) * a * t * t;
	printf("\nVelocity :: %f", v);
	printf("\nDistance Travelled :: %f", s);

	return 1;
}
