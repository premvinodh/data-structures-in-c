//============================================================================
// Name        : 221_FileReadAndDisplayCountOfLinesBlanksTabs.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to read the contents of a text file and
//				   output the count of lines, tabs and blanks.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	FILE *fp;
	char ch;
	int nl, nb, nt;

	fp = fopen("E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	nl = 0;
	nb = 0;
	nt = 0;
	while (!feof(fp)) {
		ch = fgetc(fp);
		if (ch == ' ') {
			nb++;
		} else {
			if (ch == '\n') {
				nl++;
			} else if (ch == '\t') {
				nt++;
			}
		}
	}
	fclose(fp);
	printf("No of blanks = %d\n", nb);
	printf("No of lines = %d\n", nl + 1); //the last line would not have \n
	printf("No of tabs = %d\n", nt);

	return 1;
}
