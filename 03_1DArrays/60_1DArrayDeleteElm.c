//============================================================================
// Name        : 60_1DArrayDeleteElm.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and delete an element
//			     'x' from it. Rewrite program 59 in an another way.
//				 (Using else statement.)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[10], n, i, j, p, flag = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 14\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", &a[i]);
	}
	printf("Enter search value");
	scanf("%d", &p);
	for (i = 0; i < n; i++) {
		if (a[i] == p) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("Unsuccess\n");
		printf("Elements of the original array\n");
	} else {
		printf("Success and deletion is possible.\n");
	}
	if (flag == 1) {
		p = i;
		for (j = p + 1; j < n; j++) {
			a[j - 1] = a[j];
		}
		n = n - 1;
		printf("Elements of the array of deleting value at location :: %d\n",
				p);
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 1;
}
