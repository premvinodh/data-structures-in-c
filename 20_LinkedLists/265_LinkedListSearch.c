//============================================================================
// Name        : 265_LinkedListSearch.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a linked list and search for a
//				   hall ticket number 'x' in the linked list.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {
	int htno;
	char name[30];
	struct node *next;
}*head;

void create() {
	int x;
	struct node *curr;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Creating a linked list...\n");
	head = NULL;
	while (1) {
		printf("Enter hall ticket number... Enter zero to stop");
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

void search() {
	int x;
	struct node *p;

	printf("\nGive search element");
	scanf("%d", &x);

	p = head;
	while (p != NULL) {
		if (p->htno == x) {
			break;
		} else {
			p = p->next;
		}
	}
	if (p == NULL) {
		printf("Item not found");
	} else {
		printf("Item found at location %u", p);
	}

	return;
}

int main() {
	create();
	search();

	return 1;
}
