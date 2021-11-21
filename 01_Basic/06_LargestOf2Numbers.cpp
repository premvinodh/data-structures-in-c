//============================================================================
// Name        : 06_LargestOf2Numbers.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept two numbers a, b and
//				   output the largest.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a, b;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter values for a, b\n");
	scanf("%d  %d", &a, &b);
	if (a > b) {
		printf("\nLargest :: %d", a);
	} else {
		printf("\nLargest :: %d", b);
	}

	return 1;
}
