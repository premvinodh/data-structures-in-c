//============================================================================
// Name        : 291_DoublyLinkedList.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to create a doubly linked list. The various
//				 operations are
//				i) insert at the beginning
//			   ii) insert at the end
//			  iii) insert at the ith position
//			   iv) display elements from the beginning
//				v) display elements from the end
//			   vi) delete elements from the beginning
//			  vii) delete elements from the ending
//			 viii) delete the ith element
//             ix) Erase all elements
//			    x) search for an element from the beginning
//			   xi) search for an element from the ending
//============================================================================

#include <stdio.h>
#include <stdlib.h>

using namespace std;

void insertFirst();
void insertLast();
void insert();
void traverseFromBeginning();
void traverseFromEnding();
void deleteFirst();
void deleteLast();
void deleteFromPos();
void eraseAll();
void searchFromFirst();
void searchFromLast();

struct node {
	int data;
	struct node *prev;
	struct node *next;
}*head1, *head2;

int count = -1;

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
		printf("\n4. Display from beginning");
		printf("\n5. Display from ending");
		printf("\n6. Delete from the beginning");
		printf("\n7. Delete from the ending");
		printf("\n8. Delete from the ith position");
		printf("\n9. Erase all elements");
		printf("\n10. Search for an element from beginning");
		printf("\n11. Search for an element from ending");
		printf("\n12. Exit");
		//
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			insertFirst();
			break;
		case 2:
			insertLast();
			break;
		case 3:
			insert();
			break;
		case 4:
			traverseFromBeginning();
			break;
		case 5:
			traverseFromEnding();
			break;
		case 6:
			deleteFirst();
			break;
		case 7:
			deleteLast();
			break;
		case 8:
			deleteFromPos();
			break;
		case 9:
			eraseAll();
			break;
		case 10:
			searchFromFirst();
			break;
		case 11:
			searchFromLast();
			break;
		case 12:
			exit(0);
		default:
			printf("\nWrong selection!!! Try again!!!");
		}
	}

	return 1;
}

struct node* create() {
	int data;
	struct node *temp;

	temp = (struct node *) malloc(1 * sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\n Enter value to node : ");
	scanf("%d", &data);
	temp->data = data;
	count++;

	return temp;
}

void insertFirst() {
	struct node *temp;

	if (head1 == NULL) {
		temp = create();
		head1 = temp;
		head2 = head1;
	} else {
		temp = create();
		temp->next = head1;
		head1->prev = temp;
		head1 = temp;
	}
}

void insertLast() {
	struct node *temp;

	if (head1 == NULL) {
		temp = create();
		head1 = temp;
		head2 = head1;
	} else {
		temp = create();
		head2->next = temp;
		temp->prev = head2;
		head2 = temp;
	}
}

/**
 * insert as the ith position, index starts at zero.
 */
void insert() {
	struct node *p, *temp;
	int pos, i = 0;

	printf("\n Enter position to be inserted : ");
	scanf("%d", &pos);
	p = head1;

	if ((pos < 0) || (pos > count + 1)) {
		printf("\n Position out of range to insert");
		return;
	} else if ((head1 == NULL) && (pos != 0)) {
		printf("\n Empty list cannot insert other than 1st position");
		return;
	}
	if ((head1 == NULL) || (pos == 0)) {
		insertFirst();
		return;
	} else if (pos == count + 1) {
		insertLast();
	} else {
		while (i < pos - 1) {
			p = p->next;
			i++;
		}
		//
		temp = create();
		temp->next = p->next;
		temp->prev = p;
		temp->next->prev = temp;
		p->next = temp;
	}
}

void traverseFromBeginning() {
	struct node *p;

	if (head1 == head2 && head1 == NULL) {
		printf("Empty doubly linked list...\n");
	} else {
		printf(
				"Displaying elements of the doubly linked list from beginning...\n");
		p = head1;
		while (p != NULL) {
			printf("%d --> \t", p->data);
			p = p->next;
		}
	}

	return;
}

void traverseFromEnding() {
	struct node *p;
	if (head1 == head2 && head1 == NULL) {
		printf("Empty doubly linked list...\n");
	} else {
		printf(
				"Displaying elements of the doubly linked list from ending...\n");
		p = head2;
		while (p != NULL) {
			printf("%d --> \t", p->data);
			p = p->prev;
		}
	}

	return;
}

void deleteFirst() {
	struct node *p;

	p = head1;
	if (head1 == head2) {
		head1 = NULL;
		head2 = NULL;
	} else {
		head1 = head1->next;
		(p->next)->prev = NULL;
		p->next = NULL;
	}
	free(p);
	count--;
}

void deleteLast() {
	struct node *p;

	p = head2;
	if (head1 == head2) {
		head1 = NULL;
		head2 = NULL;
	} else {
		head2 = head2->prev;
		(p->prev)->next = NULL;
		p->prev = NULL;
	}
	free(p);
	count--;
}

void deleteFromPos() {
	int i = 0, pos;
	struct node *p;

	printf("\n Enter position to be deleted : ");
	scanf("%d", &pos);
	p = head1;

	if ((pos < 0) || (pos >= count + 1)) {
		printf("\n Error : Position out of range to delete");
		return;
	}
	if (head1 == NULL) {
		printf("\n Error : Empty list no elements to delete");
		return;
	} else {
		if (head1 == head2 || pos == 0) {
			// only single node in list
			deleteFirst();
			return;
		} else if (pos == count) {
			deleteLast();
			return;
		} else {
			while (i < pos) {
				p = p->next;
				i++;
			}
			(p->prev)->next = p->next;
			(p->next)->prev = p->prev;
			free(p);
			count--;
		}
		printf("\n Node deleted");

	}
}

void eraseAll() {
	struct node *p;

	if (head1 == head2 && head1 == NULL) {
		printf("Empty doubly linked list...\n");
	} else {
		printf("\nRemoving all nodes of the doubly linked list from beginning");
		while (head1 != NULL) {
			p = head1;

			if (head1 == head2) {
				head1 = NULL;
				head2 = NULL;
			} else {
				head1 = head1->next;
				(p->next)->prev = NULL;
				p->next = NULL;
			}
			free(p);
			count--;
		}
	}

	return;
}

void searchFromFirst() {
	struct node *p;
	int searchElem, found = 0, pos = -1;

	if (head1 == head2 && head1 == NULL) {
		printf("Empty doubly linked list...\n");
	} else {
		printf("\nEnter element to be searched");
		scanf("%d", &searchElem);

		printf("Searching for element from beginning...\n");
		p = head1;
		while (p != NULL) {
			pos++;
			if (searchElem != p->data) {
				p = p->next;
			} else {
				found = 1;
				break;
			}
		}
		if (found == 1) {
			printf("Search success element found at pos=%d", pos);
		} else {
			printf("Search unsuccess element not found");
		}
	}

	return;
}

void searchFromLast() {
	struct node *p;
	int searchElem, found = 0, pos = -1;

	if (head1 == head2 && head1 == NULL) {
		printf("Empty doubly linked list...\n");
	} else {
		printf("\nEnter element to be searched");
		scanf("%d", &searchElem);

		printf("Searching for element from beginning...\n");
		p = head2;
		while (p != NULL) {
			pos++;
			if (searchElem != p->data) {
				p = p->prev;
			} else {
				found = 1;
				break;
			}
		}
		if (found == 1) {
			printf("Search success element found at pos=%d", pos);
		} else {
			printf("Search unsuccess element not found");
		}
	}

	return;
}
