//============================================================================
// Name        : 229_FileTransferContentFromFileToFile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a file using string i/o and
//				 transfer the information into a second file. -- Not working.
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#define n 30;

using namespace std;

int main() {
	FILE *fp1, *fp2;
	char a[30]; //char a[n];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	// file creation
	fp1 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"w");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	printf("Press ^D on Linux and ^Z on Windows to end...");
	while (1) {
		gets(a);
		if (a == 'EOF') {
			break;
		}
		fputs(a, fp1);
	}
	fclose(fp1);

	fp1 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"w");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	fp2 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp2 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	while (!feof(fp2)) {
		fgets(a, 30, fp1); //fgets(a, n, fp1);
		fputs(a, fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return 1;
}
