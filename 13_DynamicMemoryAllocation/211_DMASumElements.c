//============================================================================
// Name        : 211_DMASumElements.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and output their sum.
//				 (Use dynamic memory allocation)
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int *a, n, sum = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many elements...\n");
	scanf("%d", &n);
	a = (int *) calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("Enter element");
		scanf("%d", a + i);
		sum += *(a + i);
	}
	printf("Sum = %d\n", sum);

	return 1;
}
