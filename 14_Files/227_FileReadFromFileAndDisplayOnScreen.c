//============================================================================
// Name        : 227_FileReadFromFileAndDisplayOnScreen.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to read the contents from a text file and
//				 display it on the screen. (Different Logic to Program No 221
//				 and 227.)
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	FILE *fp;
	char ch;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	fp = fopen("E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);  //putch(ch);
	}
	fclose(fp);

	return 1;
}
