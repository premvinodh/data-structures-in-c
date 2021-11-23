//============================================================================
// Name        : 152_EmployeeStructWithDateStruct.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept employee information such as the
//				 employee number, name, date of birth and date of joining as
//				 inputs for 'n' employees and output the results as below::-
//				(Use struct data type for employee and dates)
//	EmpNo	Name	Date Of Birth 	DateofJoining
//-------------------------------------------------
// Note :: There seems to be a problem with gets and puts in eclipse CDT, so
//		   using print and scanf for strings. But gets and puts should work
//		   fine on a normal Turbo C++ compiler.
//============================================================================

#include <stdio.h>

using namespace std;

struct dateinfo {
	int day;
	int month;
	int year;
};

struct empinfo {
	int empno;
	char name[30];
	struct dateinfo dob, doj;
};

int main() {
	int n;
	struct empinfo e[30];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many employees... Maximum 30\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter Employee Number\n");
		scanf("%d", &e[i].empno);
		printf("Enter Employee Name\n");
		scanf("%s", e[i].name); 	// gets(e[i].name);
		printf("Enter day, month, year of birth \n");
		scanf("%d %d %d", &e[i].dob.day, &e[i].dob.month, &e[i].dob.year);
		printf("Enter day, month, year of joining \n");
		scanf("%d %d %d", &e[i].doj.day, &e[i].doj.month, &e[i].doj.year);
	}

	printf("EmpNo \tName \Date Of Birth \tDate of Joining");
	printf(
			"\n---------------------------------------------------------------\n");
	for (int i = 0; i < n; i++) {
		printf("%d\t", e[i].empno);
		printf("%s\t", e[i].name);		// puts(e[i].name);
		printf("%2d-%2d-%2d\t", e[i].dob.day, e[i].dob.month, e[i].dob.year);
		printf("%2d-%2d-%2d\n", e[i].doj.day, e[i].doj.month, e[i].doj.year);
	}

	return 1;
}
