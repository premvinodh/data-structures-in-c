//============================================================================
// Name        : 271_SortingTechBubbleSort.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform bubble sort.
//============================================================================

#include <stdio.h>

using namespace std;

void bubbleSort(int arr[30], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int a[30], n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 30");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter element.");
		scanf("%d", &a[i]);
	}
	//
	bubbleSort(a, n);
	//
	printf("Elements in sorted order...");
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
	}

	return 1;
}
