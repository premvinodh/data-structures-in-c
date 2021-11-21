//============================================================================
// Name        : 49_1DArrayStraightLineConstantsCalc.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the constants m,c to fit a straight
//				 line y = mx + c by accepting the inputs (xi, yi)
//				 where i =  1 to n using the formula.
// 				 m = n*∑(xiyi) - ∑ (xiyi)
//     			 --------------------  where ∑ is sigma
//					 n*∑(xi)^2 - (∑xi)^2
// 				 c =(∑yi - m∑xi)/n where ∑ is sigma
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int x[10], y[10], m, c, i, Sx, Sy, Sxy, SxSq, n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 10\n");
	scanf("%d", &n);
	Sx = 0;
	Sy = 0;
	Sxy = 0;
	SxSq = 0;
	for (i = 0; i < n; i++) {
		printf("Enter values for x,y");
		scanf("%d %d", &x[i], &y[i]);
		Sx += x[i];
		Sy += y[i];
		Sxy += x[i] * y[i];
		SxSq += x[i] * x[i];
	}
	m = ((n * Sxy) - (Sx * Sy)) / ((n * SxSq) - (Sx * Sx));
	c = (Sy - (m * Sx)) / n;

	printf("m=%d c=%d", m, c);

	return 1;
}
