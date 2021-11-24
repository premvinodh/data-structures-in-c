//============================================================================
// Name        : 231_FileStoreStudentStructureInAFile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a data file to store the following
//				 students information. Student Number, Name and Marks obtained
//				 in 3 subjects.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	struct strec {
		int stno;
		char name[30];
		float m1, m2, m3;
	};
	struct strec s;
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
	printf("Enter Student Number as Zero to end...");
	while (1) {
		printf("\nStudent number ::");
		scanf("%d", &s.stno);
		if (s.stno == 0) {
			break;
		}
		printf("\nStudent name ::");
		scanf("%s", s.name);
		printf("\nMarks in subject 1 ::");
		scanf("%f", &s.m1);
		printf("\nMarks in subject 2 ::");
		scanf("%f", &s.m2);
		printf("\nMarks in subject 3 ::");
		scanf("%f", &s.m3);
		fprintf(fp, "%d %s %f %f %f", s.stno, s.name, s.m1, s.m2, s.m3);
	}
	fclose(fp);

	return 1;
}
