//============================================================================
// Name        : 109_FuncFactorial.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a function to accept an integer 'n' and output its
//				 factorial.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual factorial function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a factorial method exists within the scope.
void factorial(int n);

int main() {
	int m;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give number\n");
	scanf("%d", &m);
	factorial(m);

	return 1;
}

void factorial(int n) {
	int i, f;
	f = 1;
	for (i = 2; i <= n; i++) {
		f = f * i;
	}
	printf("Factorial of a number :: %d", f);

	return;
}
