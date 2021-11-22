//============================================================================
// Name        : 117_StrLengthOfStringUsingWhile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output its length
//				 using while statement (without using builtin functions)
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	char s[10];
	int i;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(s);
	i = 0;
	while (s[i] != '\0') {
		i += 1;
	}
	printf("Length = %d", i);

	return 1;
}
