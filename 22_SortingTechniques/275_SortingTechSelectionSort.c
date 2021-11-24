//============================================================================
// Name        : 275_SortingTechSelectionSort.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform selection sort.
//============================================================================

#include <stdio.h>

using namespace std;

void selectionSort(int arr[30], int n) {
	int min_idx, temp;

	// One by one move boundary of unsorted subarray
	for (int i = 0; i < n - 1; i++) {
		// Find the minimum element in unsorted array
		min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		// Swap the found minimum element with the ith element
		temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
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
	selectionSort(a, n);
	//
	printf("Elements in sorted order...");
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
	}

	return 1;
}
