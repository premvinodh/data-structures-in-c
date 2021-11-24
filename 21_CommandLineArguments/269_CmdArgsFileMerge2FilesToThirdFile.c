//============================================================================
// Name        : 269_CmdArgsFileMerge2FilesToThirdFile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to merge 2 files into a third file (Use command // 				   line arguments)
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	FILE *fp1, *fp2, *fp3;
	char ch;

	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	fp2 = fopen(argv[2], "r");
	if (fp2 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	fp3 = fopen(argv[3], "w");
	if (fp3 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}

	while (!feof(fp1)) {
		ch = fgetc(fp1);
		if (ch != EOF) {
			fputc(ch, fp3);
		}
	}
	while (!feof(fp2)) {
			ch = fgetc(fp2);
			if (ch != EOF) {
				fputc(ch, fp3);
			}
		}
	fclose(fp1);
	fclose(fp2);

	return 1;
}
