//============================================================================
// Name        : 262_LinkedListStudentUseCreationProcedure.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a linked list and store the hall
//				 ticket number and name of the students in a class. Use a
//				 procedure for creation
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {
	int htno;
	char name[30];
	struct node *next;
};
void create() {
	int x;
	struct node *head, *curr;
	head = NULL;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("Enter hall ticket number");
		scanf("%d", &x);
		if (x == 0) {
			break;
		}
		curr = (struct node *) malloc(sizeof(struct node));
		curr->htno = x;
		printf("Enter name");
		scanf("%s", curr->name);
		curr->next = head;
		head = curr;
	}

	return;
}

int main() {
	create();

	return 1;
}
