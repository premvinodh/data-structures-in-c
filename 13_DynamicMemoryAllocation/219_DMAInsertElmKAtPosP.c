//============================================================================
// Name        : 219_DMAInsertElmKAtPosP.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept an array of 'n' elements and
//				 insert p at location k using a function.
//				 (Use dynamic memory allocation)
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

void insert(int *b, int *m, int p1, int k1);

int main() {
	int *a, n, k, p;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 10\n");
	scanf("%d", &n);
	a = (int *) calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("Enter element..");
		scanf("%d", a + i);
	}
	printf("Enter element to be inserted\n");
	scanf("%d", &k);
	printf("Enter location\n");
	scanf("%d", &p);
	insert(a, &n, k, p);
	for (int i = 0; i < n; i++) {
		printf("%d\n", *(a + i));
	}

	return 1;
}

void insert(int *b, int *m, int p1, int k1) {
	int q;
	q = *m;
	k1 = k1 - 1;
	for (int i = q - 1; i >= k1; i--) {
		*(b + i + 1) = *(b + i);
	}
	q = q + 1;
	*(b + k1) = p1;
	*m = q;

	return;
}
