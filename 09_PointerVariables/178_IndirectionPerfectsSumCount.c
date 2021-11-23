//============================================================================
// Name        : 178_IndirectionPerfectsSumCount.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and using indirection
//				 output the following ::-
//				 a) each perfect number.
//				 b) count the number of perfects.
//				 c) sum of perfects.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[20], n, np = 0, sp = 0, sum = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", a + i);
		sum = 0;
		for (int j = 1; j <= *(a + i) / 2; j++) {
			if (*(a + i) % j == 0) {
				sum += j;
			}
		}
		if (sum == *(a + i)) {
			printf("Number is perfect = %d\n", *(a + i));
			np++;
			sp += *(a + i);
		}
	}
	printf("Number of perfects = %d\n", np);
	printf("Sum of perfects = %d\n", sp);

	return 1;
}
