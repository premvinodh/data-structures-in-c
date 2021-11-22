//============================================================================
// Name        : 103_2DArrayInitializedArrayReplaceNonPerfectWithZeros.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to replace all non perfect numbers with zero
//				   of an array whose elements are
//							  {
//								8, 4, 2,  1,
//								6, 1, 8,  1,
//								0, 3, 28, 4
//							  }
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int sum, q;
	int a[3][4] = {
					8, 4, 2, 1,
					6, 1, 8, 1,
					0, 3, 28, 4
				  };

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			q = a[i][j];
			sum = 0;
			for (int k = 1; k <= q / 2; k++) {
				if (q % k == 0) {
					sum += k;
				}
			}
			if (sum != a[i][j]) {
				a[i][j] = 0;
			}
		}
	}
	//
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

	return 1;
}
