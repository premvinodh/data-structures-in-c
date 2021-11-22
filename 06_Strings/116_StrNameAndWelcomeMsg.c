//============================================================================
// Name        : 116_StrNameAndWelcomeMsg.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept your name as input and output the
//				 same with a welcome message.
//	
// 0	1	2	3	4	5	6	7	8	9
// A	N	V	I	T	H	\0(end of string)			

//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	char s[10];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter your name\n");
	scanf("%s", s);
	printf("Hello %s Welcome", s);

	return 1;
}
