//============================================================================
// Name        : 108_FuncNumberReverse.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a function to accept an integer 'n' and output its
//				 reverse.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual reverse function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that an reverse method exists within the scope.
void reverse(int n);

int main() {
	int m;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give number\n");
	scanf("%d", &m);
	reverse(m);

	return 1;
}

void reverse(int n) {
	int d, r = 0;
	for (;;) {
		d = n % 10;
		r = r * 10 + d;
		n /= 10;
		if (n == 0) {
			break;
		}
	}
	printf("Reverse of a number :: %d", r);

	return;
}
