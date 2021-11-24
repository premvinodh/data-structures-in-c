//============================================================================
// Name        : 228_FileReadFromFileAndDisplayOnScreen.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a file by accepting information
//				 from the keyboard. Extend the program to display the contents
// 				 of the file on the display unit by reading the contents of the
//				 file (use string i/o) -- Not working.
// EOF -- In Windows it is ^Z (Ctrl + Z),
// EOF -- In Unix it is ^D (Ctrl + D)
//============================================================================

#include <stdio.h>
#include <stdlib.h>
//#define n 30;

using namespace std;

int main() {
	FILE *fp;
	char a[30]; //char a[n];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	// file creation
	fp = fopen("E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"w");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	printf("Press ^D on Linux and ^Z on Windows to end...");
	while (1) {
		gets(a);
		if (a == 'EOF') {
			break;
		}
		fputs(a, fp);
	}
	fclose(fp);

	fp = fopen("E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	while (!feof(fp)) {
		fgets(a, 30, fp);
		puts(a);
	}
	fclose(fp);

	return 1;
}
