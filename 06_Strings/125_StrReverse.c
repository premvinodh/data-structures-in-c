//============================================================================
// Name        : 125_StrReverse.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output its reverse.
//============================================================================

#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char p[40], q[40];
	int i, j, l;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(p);
	l = strlen(p);
	for (i = 0, j = l - 1; j>=0; i++, j--) {
		q[i] = p[j];
	}
	q[i] = '\0';
	puts(q);

	return 1;
}
