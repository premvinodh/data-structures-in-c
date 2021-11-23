//============================================================================
// Name        : 153_YoungestStudentStructUsingFunction.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept student information such as the
//				 hall ticket number, name, age as inputs for 'n' students and
//				 output the youngest student.
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
	int age;
};

void minAge(int n, struct studinfo p[]) {
	struct studinfo temp;
	temp = p[0];
	for (int i = 1; i < n; i++) {
		if (p[i].age < temp.age) {
			temp = p[i];
		}
	}

	printf("Hall Ticket No. \tName \tAge");
	printf(
			"\n--------------------------------------------------------------\n");
	printf("%d\t\t\t", temp.htno);
	printf("%s\t", temp.name);		// puts(p[i].name);
	printf("%d\n", temp.age);
}

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
		printf("Enter Hall Ticket Number\n");
		scanf("%d", &p[i].htno);
		printf("Enter Student Name\n");
		scanf("%s", p[i].name); 		// gets(p[i].name);
		printf("Enter Age\n");
		scanf("%d", &p[i].age);
	}
	minAge(n, p);

	return 1;
}
