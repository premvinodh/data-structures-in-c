//============================================================================
// Name        : 292_CircularSinglyLinkedList.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a circular single linked list.
//				 The various operations are
//				i) insert at the beginning
//			   ii) insert at the ith position
//			  iii) display elements
//			   iv) delete elements from the beginning
//			    v) delete the ith element
//           vi) Erase all elements
//			  vii) search for an element
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
void insertNodeAtPos();
void traverse();
void deleteFirstNode();
void deleteNodeAtPos();
void erase();
void search();

int main() {
	int choice;
	head = NULL;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("\n\n***** MENU *****");
		printf("\n1. Insert at the beginning");
		printf("\n2. Insert at the ith position");
		printf("\n3. Display");
		printf("\n4. Delete from the beginning");
		printf("\n5. Delete from the ith position");
		printf("\n6. Erase all elements");
		printf("\n7. Search for an element");
		printf("\n8. Exit");
		//
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			insertAsFirstNode();
			break;
		case 2:
			insertNodeAtPos();
			break;
		case 3:
			traverse();
			break;
		case 4:
			deleteFirstNode();
			break;
		case 5:
			deleteNodeAtPos();
			break;
		case 6:
			erase();
			break;
		case 7:
			search();
			break;
		case 8:
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
	struct node *temp, *p;

	if (head == NULL) {
		temp = create();
		head = temp;
		temp->next = head;
	} else {
		p = head;
		while (p->next != head) {
			p = p->next;
		}
		temp = create();
		temp->next = head;
		head = temp;
		p->next = head;
	}
}

void insertAsLastNode() {
	struct node *temp, *p;

	if (head == NULL) {
		temp = create();
		head = temp;
		temp->next = head;
	} else {
		p = head;
		while (p->next != head) {
			p = p->next;
		}
		temp = create();
		p->next = temp;
		temp->next = head;
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

	if (head == NULL) {
		printf("\n Circular linked List is empty...");
	} else {
		printf("Displaying elements of the linked list...\n");
		p = head;
		while (p->next != head) {
			printf("%d -->\t", p->data);
			p = p->next;
		}
		printf("%d -->\t", p->data);
	}

	return;
}

void erase() {
	if (head == NULL) {
		printf("Circular single linked list is empty...");
	} else {
		printf("\nDeleting all elements of the linked list...\n");
		while (head != NULL) {
			deleteFirstNode();
		}
	}
	return;
}

void search() {
	struct node *p;
	int x, found = 0;

	printf("\nGive search element");
	scanf("%d", &x);

	p = head;
	while (p->next != head) {
		if (p->data == x) {
			found = 1;
			break;
		} else {
			p = p->next;
		}
	}
	// last location comparison
	if (p->data == x && found == 0) {
		found = 1;
	}
	if (found == 0) {
		printf("Item not found");
	} else {
		printf("Item found at location %u", p);
	}

	return;
}

void deleteFirstNode() {
	struct node *p, *q;

	if (head == NULL) {
		printf("Circular single linked list is empty...");
	} else {
		q = head;
		if (head->next == head) {
			head = NULL;
		} else {
			p = head;
			while (p->next != head) {
				p = p->next;
			}
			head = head->next;
			p->next = head;
		}
		free(q);
		count--;
	}
}

void deleteLastNode() {
	struct node *p, *q;

	if (head == NULL) {
		printf("Circular single linked list is empty...");
	} else {
		p = head;
		while (p->next != head) {
			q = p;
			p = p->next;
		}
		q->next = head;
		free(p);
		count--;
	}
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
