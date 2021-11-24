//============================================================================
// Name        : 230_FileMergeTwoFilesToThirdFile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to merge two files into a third file.
//				   i) Create file f1 (opening and closing)
//				  ii) Create file f2 (opening and closing)
//				 iii) Open file f1, f3 and transfer contents of f1 to f3.
//				  iv) close f1
//				   v) Open file f2, f3 and transfer contents of f2 to f3.
//				  vi) close f2 and f3
//				 vii) Open file f3 and output the contents on the screen
//				 (Use character i/o) – Not working.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	FILE *fp1, *fp2, *fp3;
	char c;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	// first file creation
	fp1 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"w");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	printf("Press ^D on Linux and ^Z on Windows to end...");
	while (1) {
		c = getc(stdin);
		if (c == 'EOF' || feof(fp1)) {
			break;
		}
		fputc(c, fp1);
	}
	fclose(fp1);

	// second file creation
	fp2 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abcd.txt",
			"w");
	if (fp2 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	printf("Press ^D on Linux and ^Z on Windows to end...");
	while (1) {
		c = getc(stdin);
		if (c == 'EOF' || feof(fp1)) {
			break;
		}
		fputc(c, fp2);
	}
	fclose(fp2);

	fp1 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	fp3 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/def.txt",
			"w");
	if (fp3 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	// read from file fp1 and copy to file fp3
	while (!feof(fp1)) {
		c = fgetc(fp1);
		fputc(c, fp3);
	}
	fclose(fp1);

	fp2 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abcd.txt",
			"r");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	// read from file fp2 and copy to file fp3
	while (!feof(fp2)) {
		c = fgetc(fp2);
		fputc(c, fp3);
	}
	fclose(fp2);
	fclose(fp3);

	return 1;
}
