//============================================================================
// Name        : 67_1DArrayInitializedArrayMeanVarianceSD.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept output the mean, variance and
//				 standard deviation of an array whose elements are
//				 {1, 4, 2, 3, 6, 8}
// Mean (M) 			 = (a1 + a2 + a3 + ...+ an)/n
// Variance (V)			 = [(a1-M)^2 + (a2-M)^2 + (a3-M)^2 + ...+ (an-M)^2]/n
// Standard Deviation (S)= sqrt(Variance)
//============================================================================

#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int a[] = { 1, 4, 2, 3, 6, 8 };
	int sum = 0;
	float mean, var = 0, sd;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 6; i++) {
		sum = sum + a[i];
	}
	mean = sum / 6;
	for (int i = 0; i < 6; i++) {
		var = var + (a[i] - mean) * (a[i] - mean);
	}
	var = var / 6;
	sd = sqrt((double) var);

	printf("Mean = %f, Variance = %f Standard Deviation = %f", mean, var, sd);

	return 1;
}
