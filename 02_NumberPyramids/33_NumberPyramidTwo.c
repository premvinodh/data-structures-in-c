//============================================================================
// Name        : 33_NumberPyramidTwo.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the following number pyramid.
//		0
//		1	0
//		0 	1 	0
//		1	0	1	0
// 		0	1	0	1	0
//  	1	0	1	0	1	0
//============================================================================

#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
	int n, m, i, j;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many lines\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		m = i%2;
		for (j = 1; j <= i; j++) {
			if (m == 0) {
				m = 1;
			} else {
				m = 0;
			}
			printf("%4d", m);
		}
		printf("\n");
	}

	return 1;
}
