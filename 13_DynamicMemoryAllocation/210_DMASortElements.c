//============================================================================
// Name        : 210_DMASortElements.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and sort them. using the
//				   (Use dynamic memory allocation)
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int *a, n, temp;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many elements...\n");
	scanf("%d", &n);
	a = (int *) calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("Enter element");
		scanf("%d", a + i);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(a + i) > *(a + j)) {
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("Sorted order = %d\n", *(a + i));
	}

	return 1;
}
