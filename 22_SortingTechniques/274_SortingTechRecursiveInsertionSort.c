//============================================================================
// Name        : 274_SortingTechRecursiveInsertionSort.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform insertion sort recursively.
//============================================================================

#include <stdio.h>

using namespace std;

void insertionSort(int arr[], int n) {
	// Base case
	if (n <= 1)
		return;

	// Sort first n-1 elements
	insertionSort(arr, n - 1);

	// Insert last element at its correct position
	// in sorted array.
	int last = arr[n - 1];
	int j = n - 2;

	/* Move elements of arr[0..i-1], that are
	 greater than key, to one position ahead
	 of their current position */
	while (j >= 0 && arr[j] > last) {
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = last;
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
	insertionSort(a, n);
	printf("Elements in sorted order...");
	for (int j = 0; j < n; j++) {
		printf("%d\t", a[j]);
	}

	return 1;
}
