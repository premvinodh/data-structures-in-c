//============================================================================
// Name        : 220_FileReadAndDisplayOnScreen.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to read the contents of a text file and
//				 output the contents on the screen.
//				 This program is similar to MS-DOS type command
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	FILE *fp;
	char ch;

	fp = fopen("E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	while (!feof(fp)) {
		ch = fgetc(fp);
		if (ch != EOF) {
			printf("%c", ch); // putc(ch);
		}
	}
	fclose(fp);

	return 1;
}
