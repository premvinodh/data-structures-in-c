//============================================================================
// Name        : 38_NumberPyramidFour.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the following number pyramid.
//							1
//						0	1
//					1 	0 	1
//				0	1	0	1
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
		for (j = 1; j <= (n-i); j++) {
			printf("    "); // 4 blank spaces put b for each blank space.
		}
		m=i%2;
		for(j = 1; j <= i; j++) {
			printf("%4d", m);
			if (m == 1) {
				m = 0;
			} else {
				m = 1;
			}
		}
		printf("\n");
	}

	return 1;
}
