//============================================================================
// Name        : 201_Indirection2Darrdemo4WithIndirection.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to demonstrate pointers to 2D arrays.
//				 Output the results of the following program.
//				 (With indirection.)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[3][4] = {
					2, 1, 0, 6,
					4, 2, 1, 3,
					3, 6, 1, 7
				  };

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("Address = %u, Content = %d\n", a[i] + j, *(*(a+i)+j));
		}
	}

	return 1;
}
