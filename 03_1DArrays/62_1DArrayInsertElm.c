//============================================================================
// Name        : 62_1DArrayInsertElm.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and insert an element
//			      'k' at position where element 'x' is stored and subsequently 
//    				moving the element ‘x’ and the remaining elements accordingly.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[12], n, i, j, k, p, x, flag = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 12\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", &a[i]);
	}
	printf("Enter value to be inserted and value before which insertion should take place");
	scanf("%d %d", &k, &x);
	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("Unsuccess");
	{
		p = i;
		for (j = n - 1; j >= p; j--) {
			a[j + 1] = a[j];
		}
		n = n + 1;
		a[p] = k;
	}
	printf("Elements of the array...");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 1;
}
