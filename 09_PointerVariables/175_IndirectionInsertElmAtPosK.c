//============================================================================
// Name        : 175_IndirectionInsertElmAtPosK.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to insert element 'k' at position 'p' in an
// 				 array. (Use indirection.) // CHECK LATER
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[20], n, k, p, *q, *r;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
	q = a;
	for (int i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", q);
		q++;
	}
	printf("Enter insertion value and position.\n");
	scanf("%d %d", &k, &p);
	p = p - 1;
	for (int j = n - 1; j >= p; j--) {
//		r = q--;
//		q = *r;
//		q--;
// TODO ::- Need to change this to third method.
// My notes had the commented out lines and the below/next line was not there 
		*(a + j + 1) = *(a + j); 
	}
//	q = k;
	n = n + 1;
	a[p] = k;
	//
	q = a;
	for (int i = 0; i < n; i++) {
		printf("%3d", *q);
		q++;
	}

	return 1;
}
