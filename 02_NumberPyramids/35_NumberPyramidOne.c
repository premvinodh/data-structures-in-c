//============================================================================
// Name        : 35_NumberPyramidOne.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the following number pyramid.
//		1
//		2	3
//		3 	4 	5
//		4	5	6	7
// 		5	6	7	8	9
//  	6	7	8	9	10	11
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
		m = i;
		for (j = 1; j <= i; j++) {
			printf("%4d", m);
			m++;
		}
		printf("\n");
	}

	return 1;
}
