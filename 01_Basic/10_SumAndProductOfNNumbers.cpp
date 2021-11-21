//============================================================================
// Name        : 10_SumAndProductOfNNumbers.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 'n' numbers and output their sum
//			     and product.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, a, sum, product, i;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many numbers\n");
	scanf("%d", &n);
	sum = 0;
	product = 1;
	for (i = 1; i <= n; i++) {
		printf("Enter number");
		scanf("%d", &a);
		sum += a;
		product *= a;
	}
	printf("Sum=%d\n", sum);
	printf("Product=%d\n", product);

	return 1;
}
