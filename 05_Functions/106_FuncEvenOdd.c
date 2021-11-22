//============================================================================
// Name        : 106_FuncEvenOdd.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a function to accept an integer and output whether it
//		 		 is even or odd.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual even_odd function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that an even_odd method exists within the scope.
void even_odd(int n);

int main() {
	int m;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give number\n");
	scanf("%d", &m);
	even_odd(m);

	return 1;
}

void even_odd(int n) {
	if (n % 2 == 0) {
		printf("Even");
	} else {
		printf("Odd");
	}

	return;
}
