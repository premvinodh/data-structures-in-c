//============================================================================
// Name        : 181_IndirectionStringReverse.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output its reverse.
//				 (Use indirection.)
//============================================================================

#include <stdio.h>
#include <cstring>

using namespace std;

int main() {
	char a[20], *p;
	int l;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter a string...\n");
	scanf("%s", a); /* gets(a);  */
	p = a;
	l = strlen(a);
	p = a + l - 1;
	for (int i = 0; i < l; i++) {
		printf("%c", *p);
		p--;
	}

	return 1;
}
