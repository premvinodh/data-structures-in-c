//============================================================================
// Name        : 17_ReverseOfANumber.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept an integer and output its reverse.
// 				 Eg., n = 26714 => reverse = 41762
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, digit, reverse;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number\n");
	scanf("%d", &n);
	reverse = 0;
	for (;;) {
		digit = n % 10;
		reverse = reverse * 10 + digit;
		n /= 10;
		if (n == 0) {
			break;
		}
	}
	printf("Reverse :: %d ", reverse);

	return 1;
}
