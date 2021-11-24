//============================================================================
// Name        : 260_PointerStructNStudents.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept the student number, name and age
//				 for 'n' students and output them. Use structure data type
//				 with pointers - Not working.
//============================================================================

#include <stdio.h>

using namespace std;

struct node {
	int htno;
	char name[30];
	int age;
};

int main() {
	struct node *p, *s[10];
	int n;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Enter how many students\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Give Htno :: ");
		scanf("%d", &s[i]->htno);
		printf("Give Name :: ");
		scanf("%s", s[i]->name);
		printf("Give Age :: ");
		scanf("%d", &s[i]->age);
	}
	p = s[0];
	for (int i = 0; i < n; i++) {
		printf("%d %s %d", p->htno, p->name, p->age);
		p++;
	}

	return 1;
}
