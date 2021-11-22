//============================================================================
// Name        : 115_FuncSortElements.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and sort them in a
//				 function.
//============================================================================

#include <stdio.h>

using namespace std;

void sort(int b[30], int m) {
	int temp;
	for (int i = 0; i < m - 1; i++) {
		for (int j = i + 1; j < m; j++) {
			if (b[i] > b[j]) {
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}

	return;
}

int main() {
	int a[30], n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many elements...Maximum 30\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter element");
		scanf("%d", &a[i]);
	}
	sort(a, n);
	for (int i = 0; i < n; i++) {
		printf("Sorted order = %d\n", a[i]);
	}

	return 1;
}
