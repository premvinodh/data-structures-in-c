//============================================================================
// Name        : 104_2DArrayInitializedArrayReplacePrimesBy1NonPrimesBy0.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to replace all primes with 1 and all non
//				 primes with zeros of an array whose elements are
//							  {
//								8, 4, 2, 1,
//								6, 1, 8, 1,
//								0, 3, 2, 4
//							  }
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int flag, q;
	int a[3][4] = {
					8, 4, 2, 1,
					6, 1, 8, 1,
					0, 3, 2, 4
				  };

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			q = a[i][j];
			flag = 0;
			for (int k = 2; k <= q / 2; k++) {
				if (q % k == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				a[i][j] = 1;
			} else {
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
