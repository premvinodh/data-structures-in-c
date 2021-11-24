//============================================================================
// Name        : 214_DMAReverseNum.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to output the reverse of an integer using
//				   reference parameter. (Use dynamic memory allocation)
//============================================================================

#include <stdio.h>

using namespace std;

void reverseNum(int k, int *p) {
	int d, rev;
	rev = 0;
	while (k != 0) {
		d = k % 10;
		rev = rev * 10 + d;
		k /= 10;
	}
	*p = rev;
	return;
}

int main() {
	int n, sum;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter element...\n");
	scanf("%d", &n);
	reverseNum(n, &sum);
	printf("Sum = %d", sum);

	return 1;
}
