//============================================================================
// Name        : 151_EmployeeStruct.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept employee information such as the
//				 employee number, name, basic salary as inputs for 'n' employees
//				 and output the results as below::- (Use struct data type)
//	EmpNo	Name	Basic 	DA 	HRA		PF   Total
//-------------------------------------------------
// The DA is 30% of the basic pay.
// The HRA is 20% of the basic pay.
// PF is 8% of the basic pay.
// The total is the sum of basic pay, da, hra, minus pf.
// Note :: There seems to be a problem with gets and puts in eclipse CDT, so
//		   using print and scanf for strings. But gets and puts should work
//		   fine on a normal Turbo C++ compiler.
//============================================================================

#include <stdio.h>

using namespace std;

struct empinfo {
	int empno;
	char name[30];
	float basic, da, hra, pf, total;
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
		printf("Enter Basic Pay\n");
		scanf("%f", &e[i].basic);
		//
		e[i].da = e[i].basic * 0.30;
		e[i].hra = e[i].basic * 0.20;
		e[i].pf = e[i].basic * 0.08;
		e[i].total = e[i].basic + e[i].da + e[i].hra - e[i].pf;
	}

	printf("EmpNo \tName \tBasic \t\tDA \t\tHRA \t\tPF \t\tTotal");
	printf("\n---------------------------------------------------------------");
	printf("-------------------------------------\n");
	for (int i = 0; i < n; i++) {
		printf("%d\t", e[i].empno);
		printf("%s\t", e[i].name);		// puts(e[i].name);
		printf("%f\t", e[i].basic);
		printf("%f\t", e[i].da);
		printf("%f\t", e[i].hra);
		printf("%f\t", e[i].pf);
		printf("%f\n", e[i].total);
	}

	return 1;
}
