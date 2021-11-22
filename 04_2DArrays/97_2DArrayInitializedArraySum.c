//============================================================================
// Name        : 97_2DArrayInitializedArraySum.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the sum of an array whose
//				 elements are {
//								8, 4, 2, 1,
//								6, 1, 8, 1,
//								0, 3, 2, 4
//							  }
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[3][4] = {
				8, 4, 2, 1,
				6, 1, 8, 1,
				0, 3, 2, 4
			  };
	int sum = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			sum = sum + a[i][j];
		}
	}
	printf("Sum = %d", sum);

	return 1;
}
