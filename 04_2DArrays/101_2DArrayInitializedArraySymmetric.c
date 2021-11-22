//============================================================================
// Name        : 101_2DArrayInitializedArraySymmetric.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output whether the matrix is symmetric
//				 or not, of an array whose elements are
//							  {
//								8, 4, 2, 1,
//								6, 1, 8, 1,
//								0, 3, 2, 4,
//								6, 5, 7, 9
//							  }
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int flag = 0;
	int a[4][4] = {
					8, 4, 2, 1,
					6, 1, 8, 1,
					0, 3, 2, 4,
					6, 5, 7, 9
				 	};

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (a[i][j] != a[j][i]) {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0) {
		printf("Symmetric");
	} else {
		printf("Not Symmetric");
	}

	return 1;
}
