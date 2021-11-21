//============================================================================
// Name        : 41_LargestOf2NumbersUsingTernaryOperator.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept two numbers a, b and
//				 output the largest using ternary operator.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a, b, l;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter values for a, b\n");
	scanf("%d  %d", &a, &b);
	//if (a > b) {
	//	l = a;
	//} else {
	//	l = b;
	//}
	l = a > b ? a : b;
	printf("\nLargest :: %d", l);
	return 1;
}
