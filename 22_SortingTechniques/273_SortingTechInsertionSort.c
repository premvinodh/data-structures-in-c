//============================================================================
// Name        : 273_SortingTechInsertionSort.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform insertion sort.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[30], x, i, k;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter first number");
	scanf("%d", &x);
	i = 0;
	while (x != -9999) {
		k = i - 1;
		while ((x < a[k]) && k >= 0) {
			a[k + 1] = a[k];
			k--;
		}
		a[k + 1] = x;
		printf("Enter next number");
		scanf("%d", &x);
		i++;
	}

	printf("The sorted order\n");
	for (int j = 0; j < i; j++) {
		printf("%d\t", a[j]);
	}

	return 1;
}
