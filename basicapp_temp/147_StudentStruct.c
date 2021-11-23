//============================================================================
// Name        : 147_StudentStruct.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept student information such as  the
//				 register number, name, father's name, age, reservation and
//				 rank as inputs from a student and output the information.
//				 (Use struct data type)
// Note :: There seems to be a problem with gets and puts in eclipse CDT, so
//		    using print and scanf for strings. But gets and puts should work
//		    fine on a normal Turbo C++ compiler.
//============================================================================

#include <stdio.h>

using namespace std;

struct stinfo {
	int regno;
	char sname[30];
	char fname[30];
	int age;
	char res[4];
	int rank;
};

int main() {
	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	struct stinfo p;

	printf("Enter Register Number\n");
	scanf("%d", &p.regno);
	printf("Enter Student Name\n");
	scanf("%s", p.sname); 	// gets(p.sname);
	printf("Enter Father's Name\n");
	scanf("%s", p.fname); 	// gets(p.fname);
	printf("Enter Age\n");
	scanf("%d", &p.age);
	printf("Enter Reservation\n");
	scanf("%s", p.res);		// gets(p.res);
	printf("Enter Rank\n");
	scanf("%d", &p.rank);
	//
	printf("Regno \tName \tFather's Name \tAge \tReservation \tRank");
	printf(
			"\n--------------------------------------------------------------\n");
	printf("%d\t", p.regno);
	printf("%s\t", p.sname);	// puts(p.sname);
	printf("%s\t\t", p.fname);	// puts(p.fname);
	printf("%d\t", p.age);
	printf("%s\t\t", p.res);	// puts(p.res);
	printf("%d\t", p.rank);

	return 1;
}
