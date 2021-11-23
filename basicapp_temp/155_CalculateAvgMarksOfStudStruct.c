//============================================================================
// Name        : 155_CalculateAvgMarksOfStudStruct.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept student information such as the
//				 hall ticket number, name, marks of 3 subjects  as inputs for
//				 'n' students and calculate the average of each student in a
//				 function and output the results.
//				 (Use struct data type)
// Note :: There seems to be a problem with gets and puts in eclipse CDT, so
//		   using print and scanf for strings. But gets and puts should work
//		   fine on a normal Turbo C++ compiler.
//============================================================================

#include <stdio.h>

using namespace std;

struct studinfo {
	int htno;
	char name[30];
	int m1, m2, m3;
	float avg;
};

struct studinfo calcAvg(struct studinfo p) {
	p.avg = (p.m1 + p.m2 + p.m3) / 3;
	return p;
}

int main() {
	int n;
	struct studinfo s[30], temp;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many students... Maximum 30\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter Hall Ticket Number\n");
		scanf("%d", &s[i].htno);
		printf("Enter Student Name\n");
		scanf("%s", s[i].name); 		// gets(s[i].name);
		printf("Enter Marks of 3 subjects\n");
		scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);
	}

	printf("Hall Ticket No. \tName \tSubject1 \tSubject2 \tSubject3 \tAverage");
	printf("\n--------------------------------------------------------------");
	printf("------------------------------------------\n");

	for (int i = 0; i < n; i++) {
		temp = calcAvg(s[i]);
		printf("%d\t\t\t", temp.htno);
		printf("%s\t", temp.name);		// puts(s[i].name);
		printf("%d\t\t", temp.m1);
		printf("%d\t\t", temp.m2);
		printf("%d\t\t", temp.m3);
		printf("%f\n", temp.avg);
	}

	return 1;
}
