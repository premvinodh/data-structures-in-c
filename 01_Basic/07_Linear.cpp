//============================================================================
// Name        : 07_Linear.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept the values a, b, c of an algrebaric
//				   equation and oputput whether the equation is linear or not.
//				   If a=0, then the equation is linear else not linear.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a, b, c;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter value(s) for a, b, c\n");
	scanf("%d  %d  %d", &a, &b, &c);
	if (a == 0) {
		printf("\nEquation is linear.");
	} else {
		printf("\nEquation is not linear.");
	}

	return 1;
}
