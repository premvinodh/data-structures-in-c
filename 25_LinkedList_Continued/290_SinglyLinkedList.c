//============================================================================
// Name        : 290_SinglyLinkedList.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a singly linked list. The various
//				 operations are
//				i) insert at the beginning
//			   ii) insert at the end
//			  iii) insert at the ith position
//			   iv) display elements
//			   vi) delete elements from the beginning
//			  vii) delete elements from the ending
//			 viii) delete the ith element
//             ix) Erase all elements
//			    x) search for an element
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {
	int data;
	struct node *next;
}*head;

int count = -1;

struct node* create();
void insertAsFirstNode();
void insertAsLastNode();
void insertNodeAtPos();
void traverse();
void deleteFirstNode();
void deleteLastNode();
void deleteNodeAtPos();
void erase();
void search();

int main() {
	int choice;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("\n\n***** MENU *****");
		printf("\n1. Insert at the beginning");
		printf("\n2. Insert at the ending");
		printf("\n3. Insert at the ith position");
		printf("\n4. Display");
		printf("\n5. Delete from the beginning");
		printf("\n6. Delete from the ending");
		printf("\n7. Delete from the ith position");
		printf("\n8. Erase all elements");
		printf("\n9. Search for an element");
		printf("\n10. Exit");
		//
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			insertAsFirstNode();
			break;
		case 2:
			insertAsLastNode();
			break;
		case 3:
			insertNodeAtPos();
			break;
		case 4:
			traverse();
			break;
		case 5:
			deleteFirstNode();
			break;
		case 6:
			deleteLastNode();
			break;
		case 7:
			deleteNodeAtPos();
			break;
		case 8:
			erase();
			break;
		case 9:
			search();
			break;
		case 10:
			exit(0);
		default:
			printf("\nWrong selection!!! Try again!!!");
		}
	}

	return 1;
}

struct node* create() {
	int elem;
	struct node *curr;
	//
	printf("Enter value to be inserted");
	scanf("%d", &elem);
	curr = (struct node *) malloc(sizeof(struct node));
	curr->data = elem;
	curr->next = NULL;
	count++;

	return curr;
}

void insertAsFirstNode() {
	struct node *temp;

	if (head == NULL) {
		temp = create();
		head = temp;
	} else {
		temp = create();
		temp->next = head;
		head = temp;
	}
}

void insertAsLastNode() {
	struct node *temp, *p;

	if (head == NULL) {
		temp = create();
		head = temp;
	} else {
		p = head;

		while (p->next != NULL) {
			p = p->next;
		}
		temp = create();
		p->next = temp;
	}
}

void insertNodeAtPos() {
	struct node *p, *temp;
	int pos, i = 0;

	printf("\n Enter position to be inserted : ");
	scanf("%d", &pos);
	p = head;

	if ((pos < 0) || (pos > count + 1)) {
		printf("\n Position out of range to insert");
		return;
	} else if ((head == NULL) && (pos != 0)) {
		printf("\n Empty list cannot insert other than 1st position");
		return;
	}
	if ((head == NULL) || (pos == 0)) {
		insertAsFirstNode();
		return;
	} else if (pos == count + 1) {
		insertAsLastNode();
	} else {
		while (i < pos - 1) {
			p = p->next;
			i++;
		}
		//
		temp = create();
		temp->next = p->next;
		p->next = temp;
	}
}

void traverse() {
	struct node *p;

	printf("Displaying elements of the linked list...\n");
	p = head;
	while (p != NULL) {
		printf("%d -->\t", p->data);
		p = p->next;
	}

	return;
}

void erase() {
	struct node *p;

	printf("\nDeleting all elements of the linked list...\n");
	while (head != NULL) {
		p = head;
		head = head->next;
		free(p);
	}

	return;
}

void search() {
	struct node *p;
	int x;

	printf("\nGive search element");
	scanf("%d", &x);

	p = head;
	while (p != NULL) {
		if (p->data == x) {
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

void deleteFirstNode() {
	struct node *p;

	p = head;
	head = head->next;
	p->next = NULL;
	free(p);
	count--;
}

void deleteLastNode() {
	struct node *p, *q;

	p = head;
	while (p->next != NULL) {
		q = p;
		p = p->next;
	}
	q->next = NULL;
	free(p);
	count--;
}

void deleteNodeAtPos() {
	int i = 0, pos;
	struct node *p, *q;

	printf("\n Enter position to be deleted : ");
	scanf("%d", &pos);

	if ((pos < 0) || (pos >= count + 1)) {
		printf("\n Error : Position out of range to delete");
		return;
	}
	if (head == NULL) {
		printf("\n Error : Empty list no elements to delete");
		return;
	} else {
		if (head == NULL || pos == 0) {
			deleteFirstNode();
			return;
		} else if (pos == count) {
			deleteLastNode();
			return;
		} else {
			p = head;
			while (i < pos) {
				q = p;
				p = p->next;
				i++;
			}
			q->next = p->next;
			free(p);
			count--;
		}
		printf("\n node deleted");
	}
}
