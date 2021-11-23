//============================================================================
// Name        : 173_IndirectionMeanVarianceSD.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers into an array and with
//				 the help of indirection output mean, variance and
//				 standard deviation.
//============================================================================

#include <math.h>
#include <stdio.h>

using namespace std;

int main() {
	int a[20], n, *p;
	float mean = 0, var = 0, sd;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
	p = a;
	for (int i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", p);
		mean += *p;
		p++;
	}
	mean = mean / n;
	p = a;
	for (int i = 0; i < n; i++) {
		var = var + (*p - mean) * (*p - mean);
	}
	var = var / n;
	sd = sqrt((double) var);
	printf("Mean = %f  Variance = %f, SD = %f", mean, var, sd);

	return 1;
}
