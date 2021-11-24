//============================================================================
// Name        : 259_PointerStructStudent.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to accept the student number, name and age
//				 from a single student and output them. Use structure data type
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
	struct node *s;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give Htno :: ");
	scanf("%d", &s->htno);
	printf("Give Name :: ");
	scanf("%s", s->name);
	printf("Give Age :: ");
	scanf("%d", &s->age);
	printf("%d %s %d", s->htno, s->name, s->age);

	return 1;
}
