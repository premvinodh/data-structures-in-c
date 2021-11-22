//============================================================================
// Name        : 119_StrLengthOfStringUsingBuiltinFn.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output its length
//				 using builtin function.
//============================================================================

#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char s[10];
	int l;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(s);
	l = strlen(s);
	printf("Length = %d", l);

	return 1;
}