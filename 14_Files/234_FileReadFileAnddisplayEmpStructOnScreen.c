//============================================================================
// Name        : 234_FileReadFileAnddisplayEmpStructOnScreen.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to read the contents of an employee file and
//				 output the following on the screen.
//				EMPNO  NAME 	BASIC 	DA 		HRA 	TOTAL
// Content of abc.txt each record fields are single space separated
//1 Mickey 10000
//2 Donald 20000
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	struct emprec {
		int no;
		char name[30];
		float basic;
	};
	struct emprec e;
	FILE *fp;
	float da, hra, total;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	// first file creation
	fp = fopen("E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"a+");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	printf("EMNNO             NAME                BASIC      DA     HRA  TOTAL");
	while (!feof(fp)) {
		fscanf(fp, "%d %s %f", &e.no, e.name, &e.basic);
		da = 0.5 * e.basic;
		hra = 0.2 * e.basic;
		total = e.basic + da + hra;
		printf("\n%5d %30s %6.2f %6.2f %6.2f %6.2f", e.no, e.name, e.basic, da,
				hra, total);
	}
	fclose(fp);

	return 1;
}
