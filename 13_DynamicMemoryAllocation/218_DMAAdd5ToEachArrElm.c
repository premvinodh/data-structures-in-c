//============================================================================
// Name        : 218_DMAAdd5ToEachArrElm.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept an array of 'n' elements and add 5
//				   to each element in a function. (Use dynamic memory allocation)
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

void add(int *p, int m) {
	for (int i = 0; i < m; i++) {
		*(p + i) = *(p + i) + 5;
	}

	return;
}

int main() {
	int *a, n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
	a = (int *) calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("Enter element..");
		scanf("%d", a + i);
	}
	add(a, n);
	for (int i = 0; i < n; i++) {
		printf("%d\n", *(a + i));
	}

	return 1;
}
