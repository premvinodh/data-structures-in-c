//============================================================================
// Name        : 171_IndirectionLinearSearch.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and perform linear
//				 search. Use indirection with arrays.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[20], n, k, flag, *p;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
	p = a;
	for (int i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", p);
		p++;
	}
	printf("Enter search element");
	scanf("%d", &k);
	flag = 0;
	p = a;
	for (int i = 0; i < n; i++) {
		if (*p == k) {
			flag = 1;
			break;
		}
		p++;
	}
	if (flag == 0) {
		printf("Unsuccess");
	} else {
		printf("Success");
	}

	return 1;
}
