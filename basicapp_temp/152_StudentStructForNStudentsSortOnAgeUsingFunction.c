//============================================================================
// Name        : 152_StudentStructForNStudentsSortOnAgeUsingFunction.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept student information such as the
//				 hall ticket number, name, age as inputs for 'n' students and
//				 sort based on age and output the results.
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

void sortOnAge(int n, struct studinfo p[]) {
	struct studinfo temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (p[i].age > p[j].age) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}

	printf("Hall Ticket No. \tName \tAge");
	printf(
			"\n--------------------------------------------------------------\n");
	for (int i = 0; i < n; i++) {
		printf("%d\t\t\t", p[i].htno);
		printf("%s\t", p[i].name);		// puts(p[i].name);
		printf("%d\n", p[i].age);
	}
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
	sortOnAge(n, p);

	return 1;
}
