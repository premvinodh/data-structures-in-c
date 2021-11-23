//============================================================================
// Name        : 176_IndirectionPrimesSumCount.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and using indirection
//				 output the following ::-
//				 a) each prime number.
//				 b) count the number of primes.
//				 c) sum of primes.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[20], n, np = 0, flag, sum = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers...Maximum 20\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter number");
		scanf("%d", a + i);
		flag = 0;
		for (int j = 2; j <= *(a + i) / 2; j++) {
			if (*(a + i) % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("Number is prime = %d\n", *(a + i));
			np++;
			sum += *(a + i);
		}
	}
	printf("Number of primes = %d\n", np);
	printf("Sum of primes = %d\n", sum);

	return 1;
}
