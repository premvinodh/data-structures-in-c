//============================================================================
// Name        : 235_FileReadFileAndCopyStudNoTotalToSecondFile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to read the contents of student marks file
//   			 and copy the student number and total marks to a second file.
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
	FILE *fp1, *fp2;
	float tot;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	// first file creation
	fp1 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt",
			"r");
	if (fp1 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	fp2 = fopen(
			"E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.out",
			"w");
	if (fp2 == NULL) {
		printf("File cannot be opened \n");
		exit(0);
	}
	while (!feof(fp1)) {
		fscanf(fp1, "%d %s %f %f %f", &s.stno, s.name, &s.m1, &s.m2, &s.m3);
		tot = s.m1 + s.m2 + s.m3;
		fprintf(fp2, "\n%4d %6.2f", s.stno, tot);
	}
	fclose(fp1);
	fclose(fp2);

	return 1;
}
