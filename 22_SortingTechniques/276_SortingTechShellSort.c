//============================================================================
// Name        : 276_SortingTechShellSort.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform shell sort.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[30], n, temp;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Give element");
		scanf("%d", a + i);
	}
	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i++) {
			for (int j = i - gap; j >= 0; j = j - gap) {
				if (a[j] < a[j + gap]) {
					temp = a[j];
					a[j] = a[j + gap];
					a[j + gap] = temp;
				}
			}
		}
	}
	printf("The sorted order\n");
	for (int i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}

	return 1;
}
