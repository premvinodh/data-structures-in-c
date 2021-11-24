//============================================================================
// Name        : 281_StackUsingLinkedList.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a stack using linked list.
//============================================================================

#include <stdio.h>
#include <cstdlib>

struct node {
	int data;
	struct node *next;
}*top = NULL;

void push(int);
void pop();
void display();
void reverse();
void reverseRecursively(struct node **head, struct node **head_next);

int main() {
	int choice, value;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\n:: Stack using Linked List ::\n");
	while (1) {
		printf("\n****** MENU ******\n");
		printf(
				"1. Push\n2. Pop\n3. Display\n4. Reverse Non-recursively\n5. Reverse Recursively\n6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			printf("Enter the value to be insert: ");
			scanf("%d", &value);
			push(value);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			reverse();
			break;
		case 5:
			if (top != NULL) {
				reverseRecursively(&top, &(top->next));
			}
			break;
		case 6:
			exit(0);
		default:
			printf("\nWrong selection!!! Please try again!!!\n");
		}
	}

	return 1;
}

void push(int value) {
	struct node *newNode;

	newNode = (struct node*) malloc(sizeof(struct node));
	newNode->data = value;
	if (top == NULL) {
		newNode->next = NULL;
	} else {
		newNode->next = top;
	}
	top = newNode;
	printf("\nInsertion is Success!!!\n");
}

void pop() {
	struct node *temp;

	if (top == NULL) {
		printf("\nStack is Empty!!!\n");
	} else {
		temp = top;
		printf("\nDeleted element: %d", temp->data);
		top = temp->next;
		free(temp);
	}
}

void display() {
	struct node *temp;

	if (top == NULL) {
		printf("\nStack is Empty!!!\n");
	} else {
		temp = top;
		while (temp->next != NULL) {
			printf("%d--->", temp->data);
			temp = temp->next;
		}
		printf("%d--->NULL", temp->data);
	}
}

/**
 * reverse without using recursion.
 */
void reverse() {
	struct node *temp, *prev;

	if (top == NULL) {
		printf("Stack does not exist\n");
	} else if (top->next == NULL) {
		printf("Single node stack reversal brings no difference\n");
	} else if (top->next->next == NULL) {
		top->next->next = top;
		top = top->next;
		top->next->next = NULL;
	} else {
		prev = top;
		temp = top->next;
		top = top->next->next;
		prev->next = NULL;
		while (top->next != NULL) {
			temp->next = prev;
			prev = temp;
			temp = top;
			top = top->next;
		}
		temp->next = prev;
		top->next = temp;
	}
}

/**
 * reverse using recursion.
 */
void reverseRecursively(struct node **head, struct node **head_next) {
	struct node *temp;

	if (*head_next != NULL) {
		temp = (*head_next)->next;
		(*head_next)->next = (*head);
		*head = *head_next;
		*head_next = temp;
		reverseRecursively(head, head_next);
	}
}
