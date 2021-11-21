//============================================================================
// Name        : 26_LengthOfANumberUsingWhile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept an integer and output its length
//				 (using while statement).
// 				 Eg., n = 26714 => length = 5
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int n, len;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number\n");
	scanf("%d", &n);
	len = 1;
	while (n != 0) {
		n /= 10;
		if (n != 0) {
			len = len + 1;
		}
	}
	printf("Length :: %d ", len);

	return 1;
}
