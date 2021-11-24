//============================================================================
// Name        : 285_QueuePriorityQue.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a priority queue using arrays.
//				 Simple descending order based priority queue.
// Insertion order :: 20, 45, 89, 56 ==> 89, 56, 45, 20.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int priorityQueue[MAX];
int front, rear;

void insertByPriority(int);
void deleteByPriority();
void checkPriorityAndInsertElement(int);
void displayPriorityQueue();
int peek();
int isEmpty();
int isFull();
int size();

int main() {
	int data, ch;
	front = rear = -1;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("\n1 - Insert an element into queue");
		printf("\n2 - Delete an element from queue");
		printf("\n3 - Display queue elements");
		printf("\n4 - Peek");
		printf("\n5 - isEmpty");
		printf("\n6 - isFull");
		printf("\n7 - Size");
		printf("\n8 - Exit");

		printf("\nEnter your choice : ");
		scanf("%d", &ch);

		switch (ch) {
		case 1:
			printf("\nEnter value to be inserted : ");
			scanf("%d", &data);
			insertByPriority(data);
			break;
		case 2:
			deleteByPriority();
			break;
		case 3:
			displayPriorityQueue();
			break;
		case 4:
			data = peek();
			printf("Element at the front of the priority queue :: %d", data);
			break;
		case 5:
			data = isEmpty();
			printf("Priority Queue is :: %s",
					data == 1 ? "empty" : "not empty");
			break;
		case 6:
			data = isFull();
			printf("Priority Queue is :: %s", data == 1 ? "full" : "not full");
			break;
		case 7:
			data = size();
			printf("Queue size :: %d", data + 1);
			break;
		case 8:
			exit(0);
		default:
			printf("\nChoice is incorrect, Enter a correct choice");
		}
	}

	return 1;
}

void insertByPriority(int data) {
	if (rear >= MAX - 1) {
		printf("\nPriority Queue overflow no more elements can be inserted");
		return;
	}
	if (front == -1 && rear == -1) {
		front++;
		rear++;
		priorityQueue[rear] = data;
		return;
	} else {
		checkPriorityAndInsertElement(data);
	}
}

void checkPriorityAndInsertElement(int data) {
	int i, j;

	for (i = 0; i <= rear; i++) {
		if (data >= priorityQueue[i]) {
			rear++;
			for (j = rear; j > i; j--) {
				priorityQueue[j] = priorityQueue[j - 1];
			}
			priorityQueue[i] = data;
			break;
		}
	}
	return;
}

void deleteByPriority() {
	if (front == -1 || front > rear) {
		printf("\nPriority Queue is empty no elements to delete");
		return;
	}
	printf("\nElement deleted from priority queue is : %d\n",
			priorityQueue[front]);
	front++;

}

void displayPriorityQueue() {
	if (front == -1 || front > rear) {
		printf("\nPriority Queue is empty");
		return;
	}
	for (int i = front; i <= rear; i++) {
		printf(" %d ", priorityQueue[i]);
	}
}

int peek() {
	return priorityQueue[front];
}

int isEmpty() {
	return (front == -1 || front > rear) ? 1 : 0;
}

int isFull() {
	return (rear == MAX - 1) ? 1 : 0;
}

int size() {
	return (rear - front);
}
