//============================================================================
// Name        : 29_ResultBasedOnOperator.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept 2 numbers a, b and an operator
//			     (+, - *, /) and output the result. (Not working...)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	int a, b;
	char op;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter 2 numbers\n");
	scanf("%d %d", &a, &b);
	printf("Enter operator\n");
	scanf("%c ", &op);
	switch (op) {
	case '+':
		printf("%d", (a + b));
		break;
	case '-':
		printf("%d", (a - b));
		break;
	case '*':
		printf("%d", (a * b));
		break;
	case '/':
		printf("%d", (a / b));
		break;
	}

	return 1;
}
