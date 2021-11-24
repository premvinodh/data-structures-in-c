//============================================================================
// Name        : 289_QueueUsingStack.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a queue using stacks.
//============================================================================

#include <stdio.h>
#include <cstdlib>

#define SIZE 50

void enqueue(int *stack1, int *top1);
void dequeue(int *stack1, int *top1, int *stack2, int *top2);
void display(int *stack, int *top);

int count = 0;

int main() {
	int choice, topInStack, topOutStack;
	int InStack[SIZE], OutStack[SIZE];

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	topInStack = topOutStack = -1;
	while (1) {
		printf("\n1.Insert element to queue \n");
		printf("2.Delete element from queue \n");
		printf("3.Display all elements of queue \n");
		printf("4.Quit \n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			enqueue(InStack, &topInStack);
			break;
		case 2:
			dequeue(InStack, &topInStack, OutStack, &topOutStack);
			break;
		case 3:
			display(InStack, &topInStack);
			break;
		case 4:
			exit(1);
		default:
			printf("Wrong choice \n");
		}
	}
}

void push(int *stack, int *top, int data) {
	stack[++(*top)] = data;
}

int pop(int *stack, int *top) {
	return stack[(*top)--];
}

void enqueue(int *stack, int *top) {
	int data;

	printf("Enter data into queue");
	scanf("%d", &data);
	push(stack, top, data);
	count++;
}

void dequeue(int *stack1, int *top1, int *stack2, int *top2) {
	int poppedValue;
	for (int i = 0; i <= count; i++) {
		poppedValue = pop(stack1, top1);
		push(stack2, top2, poppedValue);
	}
	poppedValue = pop(stack2, top2);
	count--;
	for (int i = 0; i <= count; i++) {
		poppedValue = pop(stack2, top2);
		push(stack1, top1, poppedValue);
	}
}

void display(int *stack, int *top) {
	for (int i = 0; i <= (*top); i++) {
		printf(" %d ", stack[i]);
	}
}
