//============================================================================
// Name        : 203_Indirection2DArrSimilarMatrices.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept two matrices A, B of dimensions
//				 3*4 each and output whether they are similar.
//				 (With indirection.)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[3][4], b[3][4];
	int flag;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("Enter an element into array a\n");
			scanf("%d", a[i] + j);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("Enter an element into array b\n");
			scanf("%d", b[i] + j);
		}
	}
	flag = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (*(a[i] + j) != *(b[i] + j)) {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1) {
		printf("Matrices are not similar");
	} else {
		printf("Matrices are similar");
	}

	return 1;
}
