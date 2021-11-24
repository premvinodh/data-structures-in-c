//============================================================================
// Name        : 278_SortingTechMergeSort.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform merge sort.
//============================================================================

#include <stdio.h>

using namespace std;

/**
 * Merges two subarrays of arr[].
 * First subarray is arr[l..m]
 * Second subarray is arr[m+1..n]
 */
void merge(int arr[], int leftIndex, int middleIndex, int rightIndex) {
	int i, j, k;

	int n1 = middleIndex - leftIndex + 1;
	int n2 = rightIndex - middleIndex;

	/* create temp arrays */
	int leftArr[n1], rightArr[n2];

	/* Copy data to temp arrays leftArr[] and rightArr[] */
	for (i = 0; i < n1; i++) {
		leftArr[i] = arr[leftIndex + i];
	}

	for (j = 0; j < n2; j++) {
		rightArr[j] = arr[middleIndex + 1 + j];
	}

	/* Merge the temp arrays back into arr[l..n]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = leftIndex; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (leftArr[i] <= rightArr[j]) {
			arr[k] = leftArr[i];
			i++;
		} else {
			arr[k] = rightArr[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of leftArr[], if there are any */
	while (i < n1) {
		arr[k] = leftArr[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of rightArr[], if there are any */
	while (j < n2) {
		arr[k] = rightArr[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[30], int leftIndex, int rightIndex) {
	if (leftIndex < rightIndex) {
		int middleIndex = (leftIndex + rightIndex) / 2;

		// Sort first and second halves
		mergeSort(arr, leftIndex, middleIndex);
		mergeSort(arr, middleIndex + 1, rightIndex);

		merge(arr, leftIndex, middleIndex, rightIndex);
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
	mergeSort(a, 0, n - 1);
	printf("Elements in sorted order...");
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
	}

	return 1;
}
