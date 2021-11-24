//============================================================================
// Name        : 239_FileModifyEmpRecInFile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform modification to employee file 
//				   Not working.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	struct emprec {
		int no;
		char name[30];
		float basic;
	} e;
	FILE *fp;
	int lno;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("Give employee number");
		scanf("%d", &lno);
		if (lno == 0) {
			exit(0);
		}
		fp =
				fopen(
						"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
						"r+");
		if (fp == NULL) {
			printf("File cannot be opened \n");
			exit(0);
		}
		fscanf(fp, "%d %s %f %f %f", &e.no, e.name, &e.basic);
		while (!feof(fp) && lno != e.no) {
			fscanf(fp, "%d %s %f %f %f", &e.no, e.name, &e.basic);
			if (feof(fp)) {
				printf("Record not found \n");
				fclose(fp);
			} else {
				printf("Existing data\n");
				printf("no = %d\n", e.no);
				printf("name = %s\n", e.name);
				printf("basic = %f\n", e.basic);
				printf("Give new information\n");
				printf("Give no\n");
				scanf("%n", &e.no);
				printf("Give name\n");
				scanf("%s", e.name);
				printf("Give basic\n");
				scanf("%f", &e.basic);
				fscanf(fp, "%d %s %f", e.no, e.name, e.basic);
			}
		}
	}
	fclose(fp);

	return 1;
}
