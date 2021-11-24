//============================================================================
// Name        : 283_QueueUsingArrays.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a queue using arrays.
//============================================================================

#include <stdio.h>
#include <cstdlib>

#define MAX 50
int queue[MAX];
int rear = -1;
int front = -1;

void insert();
void remove();
void display();

int main() {
	int choice;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("\n1.Insert element to queue \n");
		printf("2.Delete element from queue \n");
		printf("3.Display all elements of queue \n");
		printf("4.Quit \n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			insert();
			break;
		case 2:
			remove();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(1);
		default:
			printf("Wrong choice \n");
		}
	}
}

void insert() {
	int add_item;

	if (rear == MAX - 1) {
		printf("\nQueue Overflow \n");
	} else {
		if (front == -1) {
			/*If queue is initially empty */
			front = 0;
		}
		printf("\nInsert the element in queue : ");
		scanf("%d", &add_item);
		rear = rear + 1;
		queue[rear] = add_item;
	}
}

void remove() {
	if (front == -1 || front > rear) {
		printf("\nQueue Underflow \n");
		return;
	} else {
		printf("\nElement deleted from queue is : %d\n", queue[front]);
		front = front + 1;
	}
}

void display() {
	if (front > rear || (front == -1 && front == rear)) {
		printf("\nQueue is empty \n");
	} else {
		printf("\nQueue is : \n");
		for (int i = front; i <= rear; i++) {
			printf("%d ", queue[i]);
		}
		printf("\n");
	}
}
