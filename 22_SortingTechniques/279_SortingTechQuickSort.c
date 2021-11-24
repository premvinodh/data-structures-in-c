//============================================================================
// Name        : 279_SortingTechQuickSort.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform quick sort.
//============================================================================

#include <stdio.h>

using namespace std;

/**
 * This function takes the last element as pivot,
 * places the pivot element at its correct position in sorted array, and
 * places all smaller (smaller than pivot) elements to left of pivot, and
 * all greater elements to right of pivot.
 */
int partition(int arr[], int low, int high) {
	int temp;

	int pivot = arr[high];    // pivot
	int i = (low - 1);  // Index of smaller element

	for (int j = low; j <= high - 1; j++) {
		// If current element is smaller than or equal to pivot
		if (arr[j] <= pivot) {
			i++;    // increment index of smaller element

			// swap arr[i] and arr[j]
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	// swap arr[i + 1] and arr[high]
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;

	return (i + 1);
}

void quickSort(int arr[], int startIdx, int endIdx) {
	if (startIdx < endIdx) {
		/* pi is partitioning index, arr[p] is now at right place */
		int pi = partition(arr, startIdx, endIdx);

		// Separately sort elements before partition and after partition
		quickSort(arr, startIdx, pi - 1);
		quickSort(arr, pi + 1, endIdx);
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
	quickSort(a, 0, n - 1);
	printf("Elements in sorted order...");
	for (int j = 0; j < n; j++) {
		printf("%d\t", a[j]);
	}

	return 1;
}
