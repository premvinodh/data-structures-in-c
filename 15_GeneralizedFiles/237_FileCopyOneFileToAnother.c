//============================================================================
// Name        : 237_FileCopyOneFileToAnother.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to read the contents of a one file and copy
//				 them into a second file - Not working.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	FILE *fp1, *fp2;
	char ch, srcfile[10], destfile[10];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give source filename");
	scanf("%s", srcfile); // gets(srcfile)
	fp1 = fopen(srcfile, "r");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	printf("Give destination filename");
	scanf("%s", destfile); // gets(destfile)
	fp2 = fopen(destfile, "w");
	if (fp2 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	while (!feof(fp1)) {
		ch = fgetc(fp1);
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return 1;
}
