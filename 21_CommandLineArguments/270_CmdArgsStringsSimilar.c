//============================================================================
// Name        : 270_CmdArgsStringsSimilar.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept two strings and output whether
//				 they are similar. (Use command line arguments)
//============================================================================

#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) {
	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	if (strcmp(argv[1], argv[2]) == 0) {
		printf("Strings are similar");
	} else {
		printf("Strings are not similar");
	}

	return 1;
}
