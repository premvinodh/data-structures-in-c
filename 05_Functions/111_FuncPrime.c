//============================================================================
// Name        : 111_FuncPrime.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a function to compute whether a given number is prime
//				 or not. Output the result in the main program.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual prime function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that a prime method exists within the scope.
int prime(int n);

int main() {
	int m, flag;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter number\n");
	scanf("%d", &m);
	flag = prime(m);
	if (flag == 1) {
		printf("Number is not prime.");
	} else {
		printf("Number is prime.");
	}

	return 1;
}

int prime(int n) {
	int i, p, flag = 0;
	for (i = 2; i <= n / 2; i++) {
		p = n % i;
		if (p == 0) {
			flag = 1;
			break;
		}
	}

	return flag;
}
