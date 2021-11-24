//============================================================================
// Name        : 232_FileStoreEmployeeStructureInAFile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a data file to store the following
//				 employee information. Employee Number, Name and Basic Salary.
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
	printf("Enter Employee Number as Zero to end...");
	while (1) {
		printf("\nEmployee number ::");
		scanf("%d", &e.no);
		if (e.no == 0) {
			break;
		}
		printf("\nEmployee name ::");
		scanf("%s", e.name);
		printf("\nEmployee Basic Salary ::");
		scanf("%f", &e.basic);
		fprintf(fp, "%d %s %f", e.no, e.name, e.basic);
	}
	fclose(fp);

	return 1;
}
