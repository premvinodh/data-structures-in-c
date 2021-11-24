//============================================================================
// Name        : 266_LinkedListInsert.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a linked list and insert a new
//				 student information after the hall ticket number 'x'.
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

void searchAndInsert() {
	int x;
	struct node *p, *curr;

	printf("\nGive hall ticket number to be searched");
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
		curr = (struct node *) malloc(sizeof(struct node));
		printf("Give hall ticket number for the new record");
		scanf("%d", &curr->htno);
		printf("Give name for the new record");
		scanf("%s", curr->name);
		curr->next = p->next;
		p->next = curr;
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
	searchAndInsert();
	traverse();

	return 1;
}
