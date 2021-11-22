//============================================================================
// Name        : 121_StrCountNoOfBlanksUsingWhile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept a string and output how many blanks
//				   are there in it using while statement.
//============================================================================

#include <stdio.h>

using namespace std;

int main() {
	char s[30];
	int i, nb = 0;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give string\n");
	gets(s);
	i = 0;
	while (s[i] != '\0') {
		if (s[i] == ' ') {
			nb += 1;
		}
		i++;
	}
	printf("No. of blanks = %d", nb);

	return 1;
}