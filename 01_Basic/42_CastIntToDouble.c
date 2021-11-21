//============================================================================
// Name        : 42_CastIntToDouble.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept an integer number a and cast it
//				 to double to be used in calculating the square root of a number.
//============================================================================

#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	int a;
	float p;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number\n");
	scanf("%d", &a);
	p = sqrt((double) a);
	printf("\nSquare root :: %f", p);

	return 1;
}
