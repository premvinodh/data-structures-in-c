//============================================================================
// Name        : 224_FileTransferOneFileToAnother.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to transfer the contents of one text file to
//				 another.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	FILE *fp1, *fp2;
	char ch;

	fp1 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	fp2 =
			fopen(
					"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abccopy.txt",
					"w");
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
