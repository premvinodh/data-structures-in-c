//============================================================================
// Name        : 248_RecursiveFuncBinarySearch.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a recursive function to perform binary search.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual recFnBinarySearch function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a recFnBinarySearch method exists within the scope.
int recFnBinarySearch(int b[10], int q, int top, int bott);

int main() {
	int a[10], n, p, l;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many elements...Maximum 10");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter element...");
		scanf("%d", a + i);
	}
	printf("Enter which element to be searched\n");
	scanf("%d", &p);
	l = recFnBinarySearch(a, p, 1, (n - 1));
	if (l == 0) {
		printf("Search is unsuccessful...");
	} else {
		printf("Search is successful at %d\n", l);
	}

	return 1;
}

int recFnBinarySearch(int b[10], int p1, int top, int bott) {
	int mid;
	if (top <= bott) {
		mid = (top + bott) / 2;
		if (p1 < b[mid]) {
			bott = mid - 1;
			recFnBinarySearch(b, p1, top, bott);
		} else if (p1 > b[mid]) {
			top = mid + 1;
			recFnBinarySearch(b, p1, top, bott);
		} else if (p1 == b[mid]) {
			return (mid + 1);
		}
	} else {
		return 0;
	}
}
