//============================================================================
// Name        : 149_StudentStructForNStudentsAgeMoreThan25.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept student information such as  the
//				 register number, name, father's name, age, reservation and
//				 rank as inputs for 'n' students and output their information of
//				 all students whose age is more than 25.
//				 (Use struct data type)
// Note :: There seems to be a problem with gets and puts in eclipse CDT, so
//		   using print and scanf for strings. But gets and puts should work
//		   fine on a normal Turbo C++ compiler.
//============================================================================

#include <stdio.h>

using namespace std;

struct studinfo {
	int regno;
	char sname[30];
	char fname[30];
	int age;
	char res[4];
	int rank;
};

int main() {
	int n;
	struct studinfo p[30];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many students... Maximum 30\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter Register Number\n");
		scanf("%d", &p[i].regno);
		printf("Enter Student Name\n");
		scanf("%s", p[i].sname); 	// gets(p[i].sname);
		printf("Enter Father's Name\n");
		scanf("%s", p[i].fname); 	// gets(p[i].fname);
		printf("Enter Age\n");
		scanf("%d", &p[i].age);
		printf("Enter Reservation\n");
		scanf("%s", p[i].res);		// gets(p[i].res);
		printf("Enter Rank\n");
		scanf("%d", &p[i].rank);
	}

	printf("Regno \tName \tFather's Name \tAge \tReservation \tRank");
	printf(
			"\n--------------------------------------------------------------\n");
	for (int i = 0; i < n; i++) {
		if (p[i].age > 25) {
			printf("%d\t", p[i].regno);
			printf("%s\t", p[i].sname);		// puts(p[i].sname);
			printf("%s\t\t", p[i].fname);	// puts(p[i].fname);
			printf("%d\t", p[i].age);
			printf("%s\t\t", p[i].res);		// puts(p[i].res);
			printf("%d\n", p[i].rank);
		}
	}

	return 1;
}
