//============================================================================
// Name        : 238_FileModifyStudRecInFile.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to perform the following until the hall
//				 ticket number given for modification is zero. – Not working.
//   i) Get the hall ticket number.
//  ii) Open the file in r+ mode.
// iii) search for the record.
//  iv) If the record is found display it on the screen, if not display
//	    appropriate information.
//   v) Ask for modified new information.
//  vi) Replace the old record with new record.
// vii) Close the file and go back.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	struct strec {
		int htno;
		char name[30];
		float m1, m2, m3;
	} s;
	FILE *fp;
	int lhtno;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("Give hall ticket number");
		scanf("%d", &lhtno);
		if (lhtno == 0) {
			exit(0);
		}
		fp =fopen(
		 "E:/Apps/Eclipse/Workspaces/Neon2/MyCPrograms/src/files/abc.txt", "r+");
		if (fp == NULL) {
			printf("File cannot be opened \n");
			exit(0);
		}
		fscanf(fp, "%d %s %f %f %f", &s.htno, s.name, &s.m1, &s.m2, &s.m3);
		while (!feof(fp) && lhtno != s.htno) {
			fscanf(fp, "%d %s %f %f %f", &s.htno, s.name, &s.m1, &s.m2, &s.m3);
			if (feof(fp)) {
				printf("Record not found \n");
				fclose(fp);
			} else {
				printf("Existing data\n");
				printf("htno = %d\n", s.htno);
				printf("name = %s\n", s.name);
				printf("subject 1 = %f\n", s.m1);
				printf("subject 2 = %f\n", s.m2);
				printf("subject 3 = %f\n", s.m3);
				printf("Give new information\n");
				printf("Give htno\n");
				scanf("%n", &s.htno);
				printf("Give name\n");
				scanf("%s", s.name);
				printf("Give subject1\n");
				scanf("%f", &s.m1);
				printf("Give subject2\n");
				scanf("%f", &s.m2);
				printf("Give subject3\n");
				scanf("%f", &s.m3);
				fscanf(fp, "%d %s %f %f %f", s.htno, s.name, s.m1, s.m2, s.m3);
			}
		}
	}
	fclose(fp);

	return 1;
}
