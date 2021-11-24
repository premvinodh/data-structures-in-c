//============================================================================
// Name        : 272_SortingTechRecursiveBubbleSort.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform bubble sort recursively.
//============================================================================

#include <stdio.h>

using namespace std;

void bubbleSort(int arr[], int n) {
	int temp;

	// Base condition
	if (n == 1) {
		return;
	}

	// One pass of bubble sort. After this pass, the largest element
	// is moved (or bubbled) to end.
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}

	// Largest element is fixed, recur for remaining array
	bubbleSort(arr, n - 1);
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
	bubbleSort(a, n);
	printf("Elements in sorted order...");
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
	}

	return 1;
}
