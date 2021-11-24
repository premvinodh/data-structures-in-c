//============================================================================
// Name        : 282_StacksUsingSingleQueue.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a stack using a single queue.
//============================================================================

#include <stdio.h>
#include <cstdlib>

#define MAX 50
int queue[MAX];
int rearArr = -1;
int frontArr = -1;

void insertQueue(int val);
void removeQueue();
void displayQueue();

void pushOntoQueueStack(int val);
void popFromQueueStack();

int main() {
	int choice, val;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("\n1.Insert element to queuestack \n");
		printf("2.Delete element from queuestack \n");
		printf("3.Display all elements of queuestack \n");
		printf("4.Quit \n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			printf("Enter element");
			scanf("%d", &val);
			pushOntoQueueStack(val);
			break;
		case 2:
			popFromQueueStack();
			break;
		case 3:
			displayQueue();
			break;
		case 4:
			exit(1);
		default:
			printf("Wrong choice \n");
		}
	}
}

/**
 * Stack push operation using queue.
 * push(s, x)
 * 1) Let size of q be s.
 * 1) Enqueue x to q
 * 2) One by one Dequeue s items from queue and enqueue them.
 */
void pushOntoQueueStack(int val) {
	//  Get previous size of queue
	int queueSize = rearArr - frontArr;

	// Push current element
	insertQueue(val);

	// Pop (or Dequeue) all previous
	// elements and put them after current
	// element
	for (int i = 0; i <= queueSize; i++) {
		// this will add front element into rear of queue
		insertQueue(queue[frontArr]);

		// this will delete front element
		removeQueue();
	}
}

/**
 * Stack pop operation using queue.
 */
void popFromQueueStack() {
	if (frontArr == -1 || frontArr > rearArr) {
		printf("No elements...");
	} else {
		removeQueue();
	}
}

/**
 * queue insert operation.
 */
void insertQueue(int add_item) {
	if (rearArr == MAX - 1) {
		printf("\nQueue Overflow \n");
	} else {
		if (frontArr == -1) {
			/*If queue is initially empty */
			frontArr = 0;
		}
		rearArr = rearArr + 1;
		queue[rearArr] = add_item;
	}
}

/**
 * queue remove operation.
 */
void removeQueue() {
	if (frontArr == -1 || frontArr > rearArr) {
		printf("\nQueue Underflow \n");
		return;
	} else {
		printf("\nElement deleted from queue is : %d\n", queue[frontArr]);
		frontArr = frontArr + 1;
	}
}

/**
 * display the elemenents of the queue.
 */
void displayQueue() {
	if (frontArr > rearArr || (frontArr == -1 && frontArr == rearArr)) {
		printf("\nQueue is empty \n");
	} else {
		printf("\nQueue is : \n");
		for (int i = frontArr; i <= rearArr; i++) {
			printf("%d ", queue[i]);
		}
		printf("\n");
	}
}
