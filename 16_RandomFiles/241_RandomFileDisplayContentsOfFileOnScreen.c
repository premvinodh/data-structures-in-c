//============================================================================
// Name        : 241_RandomFileDisplayContentsOfFileOnScreen.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a file and output the contents of
//				 the file on the screen by accessing the contents using fseek().
//				 Not working.
//============================================================================

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	FILE *fp;
	char filename[10], ch;
	long n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter filename\n");
	gets(filename);
	fp = fopen(filename, "w");
	if (fp == NULL) {
		printf("File cannot be opened");
		exit(0);
	}
	printf("To stop - press ^D (Ctrl + D) on unix, ^Z (Ctrl + Z)on windows");
	while (1) {
		ch = getch();
		if (ch == 'EOF') {
			break;
		}
		fputc(ch, fp);
	}
	fclose(fp);
	fp = fopen(filename, "r");
	while (!feof(fp)) {
		fseek(fp, n, 0);
		ch = getc(fp);
		putch(ch);
		n = n + 1l;
	}
	fclose(fp);

	return 1;
}
