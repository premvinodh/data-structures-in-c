//============================================================================
// Name        : 263_LinkedListCreateTraverseOutputData.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a linked list, traverse the linked
//				 list and output the data.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {
	int htno;
	char name[30];
	struct node *next;
};
struct node *head, *curr, *p;

void create() {
	int x;
	head = NULL;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Creating a linked list...\n");
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

void traverse() {
	printf("Displaying elements of the linked list...\n");
	p = head;
	printf("Htno \tName\n");
	while (p != NULL) {
		printf("%d \t%s\n", p->htno, p->name);
		p = p->next;
	}

	return;
}

int main() {
	create();
	traverse();

	return 1;
}
