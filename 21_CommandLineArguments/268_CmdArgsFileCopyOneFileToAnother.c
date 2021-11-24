//============================================================================
// Name        : 268_CmdArgsFileCopyOneFileToAnother.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform file copy using command line
//				 arguments.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	FILE *fp1, *fp2;
	char ch;

	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	fp2 = fopen(argv[2], "w");
	if (fp2 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}

	while (!feof(fp1)) {
		ch = fgetc(fp1);
		if (ch != EOF) {
			fputc(ch, fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);

	return 1;
}
