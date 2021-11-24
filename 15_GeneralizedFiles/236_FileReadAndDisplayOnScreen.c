//============================================================================
// Name        : 236_FileReadAndDisplayOnScreen.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to read the contents of a text file and
//				   output the contents on the screen - Not working.
//				   This program is similar to MS-DOS type command
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	FILE *fp;
	char ch, filename[10];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give filename");
	scanf("%s", filename); // gets(filename)
	fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	while (!feof(fp)) {
		ch = fgetc(fp);
		if (ch != EOF) {
			printf("%c", ch); // putch(ch);
		}
	}
	fclose(fp);

	return 1;
}
