//============================================================================
// Name        : 107_FuncNumberLength.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a function to accept an integer 'n' and output its
//				 length.
//============================================================================

#include <stdio.h>

using namespace std;

// Since the actual length function is defined after the main method.
// The C compiler does not know it exists. Hence this declaration is to inform
// the compiler that an length method exists within the scope.
void length(int n);

int main() {
	int m;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give number\n");
	scanf("%d", &m);
	length(m);

	return 1;
}

void length(int n) {
	int l = 0;
	do {
		l++;
		n /= 10;
	} while (n != 0);
	printf("Length of a number :: %d", l);
	return;
}
