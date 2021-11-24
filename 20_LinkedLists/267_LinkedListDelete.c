//============================================================================
// Name        : 267_LinkedListDelete.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a linked list and delete a
//			 	 specified students information from a list. (Deletion of node)
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

void searchAndDelete() {
	int x;
	struct node *p, *q;

	printf("\nGive hall ticket number of the student to be deleted");
	scanf("%d", &x);

	p = head;
	while (p != NULL) {
		if (p->htno == x) {
			break;
		} else {
			q = p;
			p = p->next;
		}
	}
	if (p == NULL) {
		printf("Item not found - Deletion is not possible...");
	} else {
		/* p is the address of the node to be deleted, and
		 q is the address of the previous node.*/

		// when node to be deleted is the head node
		if (p == head) {
			head = head->next;
		} else {
			q->next = p->next;
		}
		free(p);
	}

	return;
}

void traverse() {
	struct node *p;

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
	searchAndDelete();
	traverse();

	return 1;
}
