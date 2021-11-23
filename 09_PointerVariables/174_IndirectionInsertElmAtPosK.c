//============================================================================
// Name        : 174_IndirectionInsertElmAtPosK.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to insert element ‘k’ at position ‘p’ in an
//				   array. (Use indirection.)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[20], n, k, p;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", a + i);
	}
	printf("Enter insertion value and position.\n");
	scanf("%d %d", &k, &p);
	p = p - 1;
	for (int j = n - 1; j >= p; j--) {
		a[j + 1] = a[j];
	}
	n = n + 1;
	a[p] = k;
	for (int i = 0; i < n; i++) {
		printf("%3d", *(a + i));
	}

	return 1;
}
