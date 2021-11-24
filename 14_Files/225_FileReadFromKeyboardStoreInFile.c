//============================================================================
// Name        : 225_FileReadFromKeyboardStoreInFile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a text file (read the contents
//				 from keyboard and store them in a file) Note :: ^D = EOF
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

	fp =fopen(
	 "E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abccopy.txt", "w");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	printf("Press * to stop...\n");
	while (true) {
//		fflush(stdin); // getting a string of characters from keyboard */
		ch = getchar();
		if (ch == '*') {
			break;
		}
		fputc(ch, fp); //putc(ch, fp)
	}
	fclose(fp);

	return 1;
}
