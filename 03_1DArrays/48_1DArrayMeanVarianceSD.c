//============================================================================
// Name        : 48_1DArrayMeanVarianceSD.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and output mean,
//			       variance and standard deviation.
// Mean (M) = (a1 + a2 + a3 + ...+ an)/n
// Variance (V) = [(a1-M)^2 + (a2-M)^2 + (a3-M)^2 + ...+ (an-M)^2]/n
// Standard Deviation (S)= sqrt(Variance)
//============================================================================

#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	int a[10], i, n;
	float m, v, s;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 10\n");
	scanf("%d", &n);
	m = 0;
	v = 0;
	for (i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", &a[i]);
		m+=a[i];
	}
	m =m/n;
	for (i = 0; i < n; i++) {
		v = v+ (a[i]-m)*(a[i]-m);
	}
	v = v/n;
	s= sqrt((double)v);

	printf("Mean               :: %f\n", m);
	printf("Variance           :: %f\n", v);
	printf("Standard Deviation :: %f", s);

	return 1;
}
