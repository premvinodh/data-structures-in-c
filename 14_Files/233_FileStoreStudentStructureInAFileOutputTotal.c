//============================================================================
// Name        : 233_FileStoreStudentStructureInAFileOutputTotal.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to read the contents of student marks file
//   			 and output them on the display screen together with their total
//				 marks in an appropriate format.
// Content of abc.txt each record fields are single space separated
//1 Mickey 11 22 33
//2 Donald 10 11 12
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
	float tot;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	// first file creation
	fp = fopen("E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	printf("STNO             NAME                  M1     M2     M3   TOTAL");
	while (!feof(fp)) {
		fscanf(fp, "%d %s %f %f %f", &s.stno, s.name, &s.m1, &s.m2, &s.m3);
		tot = s.m1+s.m2+s.m3;
		printf("\n%4d %30s %6.2f %6.2f %6.2f %6.2f", s.stno, s.name, s.m1, s.m2, s.m3, tot);
	}
	fclose(fp);

	return 1;
}
