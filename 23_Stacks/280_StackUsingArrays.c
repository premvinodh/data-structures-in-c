//============================================================================
// Name        : 280_StackUsingArrays.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a stack using arrays.
//============================================================================

#include <stdio.h>
#include <cstdlib>

#define SIZE 10

void push(int);
void pop();
void displayStackElements();
void reverse();
void insertAtBottom(int item);
void reverseRecur();

int stack[SIZE], top = -1;

int main() {
	int value, choice;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("\n\n***** MENU *****\n");
		printf(
				"1. Push\n2. Pop\n3. Display\n4. Reverse\n5. Reverse Recursively\n6. Exit");
		printf("\nEnter your choice: ");
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
			displayStackElements();
			break;
		case 4:
			reverse();
			break;
		case 5:
			reverseRecur();
			break;
		case 6:
			exit(0);
		default:
			printf("\nWrong selection!!! Try again!!!");
		}
	}

	return 1;
}

void push(int value) {
	if (top == SIZE - 1) {
		printf("\nStack is Full!!! Insertion is not possible!!!");
	} else {
		top++;
		stack[top] = value;
		printf("\nInsertion success!!!");
	}
}

void pop() {
	if (top == -1) {
		printf("\nStack is Empty!!! Deletion is not possible!!!");
	} else {
		printf("\nDeleted : %d", stack[top]);
		top--;
	}
}

void displayStackElements() {
	if (top == -1) {
		printf("\nStack is Empty!!!");
	} else {
		printf("\nStack elements are:\n");
		for (int i = top; i >= 0; i--)
			printf("%d\n", stack[i]);
	}
}

void reverse() {
	int a[10], top1;
	top1 = top;
	for (int i = top; i >= 0; i--) {
		a[i] = stack[i];
		printf("Top element :: %d\n", a[i]);
		pop();
	}
	for (int i = top1; i >= 0; i--) {
		push(a[i]);
	}
}

void reverseRecur() {
	if (top != -1) { // stack is not empty
		/* keep on popping top element of stack in
		 every recursive call till stack is empty  */
		int topElem = stack[top];
		pop();
		reverse();

		/* Now, instead of inserting element back on top of stack,
		 * we will insert it at the bottom of stack */
		insertAtBottom(topElem);
	}
}
void insertAtBottom(int item) {
	if (top == -1) { // stack is empty
		push(item);
	} else {
		/* Store the top most element of stack in top variable and
		 recursively call insertAtBottom for rest of the stack */
		int topElem = stack[top];
		pop();
		insertAtBottom(item);

		/* Once the item is inserted at the bottom,
		 * push the top element back to stack */
		push(topElem);
	}
}
