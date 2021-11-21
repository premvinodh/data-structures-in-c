//============================================================================
// Name        : 39_NumberPyramidEight.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the following number pyramid.
//		5	6	7	8	9	8	7	6	5
//			4	5	6	7	6	5	4
//				3	4	5	4	3
//					2	3	2
//						1
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
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= (n - i); j++) {
			printf("    "); // 4 blank spaces put b for each blank space.
		}
		m = i;
		for (j = 1; j <= i; j++) {
			printf("%4d", m);
			m++;
		}
		m = m - 2;
		for (j = 1; j <= i; j++) {
			printf("%4d", m);
			m--;
		}
		printf("\n");
	}

	return 1;
}
