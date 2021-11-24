//============================================================================
// Name        : 223_FileReadAndCountOfVowelsConsonantsDigitsLinesBlanksSym.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to read the contents of a text file and
//				 output the count of vowels, consonants, digits, lines, tabs,
//				 blanks and other symbols.
//============================================================================

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	FILE *fp;
	char ch;
	int nl, nb, no, nv, nc, nd;

	fp = fopen("E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	nl = 0;
	no = 0;
	nb = 0;
	nv = 0;
	nc = 0;
	nd = 0;
	while (!feof(fp)) {
		ch = fgetc(fp);
		ch = toupper(ch);
		if (ch == ' ') {
			nb++;
		} else if (ch == '\n') {
			nl++;
		} else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O'
				|| ch == 'U') {
			nv++;
		} else if (ch > 'A' && ch <= 'Z') {
			nc++;
		} else if (ch >= '0' && ch <= '9') {
			nd++;
		} else {
			no++;
		}
	}
	fclose(fp);
	printf("No of blanks = %d\n", nb);
	printf("No of lines = %d\n", nl + 1); //the last line would not have \n
	printf("No of vowels = %d\n", nv);
	printf("No of consonants = %d\n", nc);
	printf("No of digits = %d\n", nd);
	printf("No of other symbols = %d\n", no);

	return 1;
}
