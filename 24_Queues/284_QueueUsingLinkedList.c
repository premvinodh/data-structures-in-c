//============================================================================
// Name        : 284_QueueUsingLinkedList.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a queue using linked list.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node *next;
}*front, *rear;

int frontElement();
void enqueue(int data);
void dequeue();
void isEmpty();
void display();

int main() {
	int ch, elem;
	front = rear = NULL;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("\n 1 - Enque");
		printf("\n 2 - Deque");
		printf("\n 3 - front element");
		printf("\n 4 - Empty");
		printf("\n 5 - Display");
		printf("\n 6 - Exit");

		printf("\n Enter choice : ");
		scanf("%d", &ch);
		switch (ch) {
		case 1:
			printf("Enter data : ");
			scanf("%d", &elem);
			enqueue(elem);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			elem = frontElement();
			if (elem != 0)
				printf("\nFront element : %d\n", elem);
			else
				printf("\n No front element in Queue as queue is empty\n");
			break;
		case 4:
			isEmpty();
			break;
		case 5:
			display();
			break;
		case 6:
			exit(0);
		default:
			printf("Wrong choice, Please enter correct choice  ");
			break;
		}
	}

	return 1;
}

void enqueue(int data) {
	struct node *temp;

	if (rear == NULL) {
		rear = (struct node *) malloc(1 * sizeof(struct node));
		rear->next = NULL;
		rear->info = data;
		front = rear;
	} else {
		temp = (struct node *) malloc(1 * sizeof(struct node));
		rear->next = temp;
		temp->info = data;
		temp->next = NULL;

		rear = temp;
	}
}

void display() {
	struct node *front1;

	front1 = front;
	if ((front1 == NULL) && (rear == NULL)) {
		printf("\nQueue is empty\n");
		return;
	}
	printf("\nDisplaying the elements of the queue...\n");
	while (front1 != rear) {
		printf("%d --> ", front1->info);
		front1 = front1->next;
	}
	if (front1 == rear) {
		printf("%d -->", front1->info);
	}
	printf("\n");
}

void dequeue() {
	struct node *front1;

	front1 = front;
	if (front1 == NULL) {
		printf("\n Error: Trying to display elements from empty queue");
		return;
	} else if (front1->next != NULL) {
		front1 = front1->next;
		printf("\n Dequed value : %d\n", front->info);
		free(front);
		front = front1;
	} else {
		printf("\n Dequed value : %d\n", front->info);
		free(front);
		front = NULL;
		rear = NULL;
	}
}

int frontElement() {
	if ((front != NULL) && (rear != NULL))
		return (front->info);
	else
		return 0;
}

void isEmpty() {
	if ((front == NULL) && (rear == NULL))
		printf("\n Queue empty\n");
	else
		printf("Queue not empty\n");
}
