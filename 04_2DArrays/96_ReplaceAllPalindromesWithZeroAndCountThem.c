//============================================================================
// Name        : 96_ReplaceAllPalindromesWithZeroAndCountThem.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a matrix and output:-
//				 	a) how many are palindromes.
//				 	b) replace all non palindrome numbers with zero.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a[5][5], m, n, p, d, np, r;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many rows...Maximum 5\n");
	scanf("%d", &m);
	printf("Enter how many columns...Maximum 5\n");
	scanf("%d", &n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("Enter element");
			scanf("%d", &a[i][j]);
		}
	}
	np = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			p = a[i][j];
			r = 0;
			for (;;) {
				d = p % 10;
				r = r * 10 + d;
				p = p / 10;
				if (p == 0) {
					break;
				}
			}
			if (r == a[i][j]) {
				np += 1;
			} else {
				a[i][j] = 0;
			}
		}
	}
	//
	printf("Printing m*n matrix...\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	printf("Number of palindromes :: %d\n", np);

	return 1;
}
