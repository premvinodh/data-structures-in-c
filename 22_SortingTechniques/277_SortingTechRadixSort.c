//============================================================================
// Name        : 277_SortingTechRadixSort.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform radix sort.
//============================================================================

#include <stdio.h>

using namespace std;

/**
 * A function to do counting sort of arr[] according to the digit represented
 * by exp.
 */
void countSort(int arr[], int n, int exp) {
	int output[n]; // output array
	int i, count[10] = { 0 };

	// Store count of occurrences in count[]
	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;

	// Change count[i] so that count[i] now contains actual
	//  position of this digit in output[]
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	// Build the output array
	for (i = n - 1; i >= 0; i--) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	// Copy the output array to arr[], so that arr[] now
	// contains sorted numbers according to current digit
	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

/**
 * A utility function to get maximum value in arr[].
 */
int getMax(int arr[], int n) {
	int mx = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];
	return mx;
}

/*
 * The main function to that sorts arr[] of size n using Radix Sort.
 */
void radixSort(int arr[30], int n) {
	// Find the maximum number to know number of digits
	int m = getMax(arr, n);

	// Do counting sort for every digit. Note that instead
	// of passing digit number, exp is passed. exp is 10^i
	// where i is current digit number
	for (int exp = 1; m / exp > 0; exp *= 10) {
		countSort(arr, n, exp);
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
	radixSort(a, n);
	//
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
	}

	return 1;
}
