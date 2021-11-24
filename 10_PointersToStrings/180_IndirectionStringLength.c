//============================================================================
// Name        : 180_IndirectionStringLength.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output its length
//				 without using library function. (Use indirection.)
//============================================================================

#include <stdio.h>

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
	l = 0;
	p = a;
	while (*p != '\0') {
		l++;
		p++;
	}
	printf("Length = %d", l);

	return 1;
}
