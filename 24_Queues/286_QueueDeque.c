//============================================================================
// Name        : 286_QueueDeque.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a dequeue.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
}*front, *rear;

void enqueueRear();
void dequeueFront();
void enqueueFront();
void dequeueRear();
void isEmpty();
void display();

int main() {
	int ch;
	front = rear = NULL;

	// Eclipse buffers the output of your program and so the order is
	// not uniform. Using this sets the order to be as that of the written prg.
	// or you can use fflush(stdout); after the first printf()
	setvbuf(stdout, NULL, _IONBF, 0);

	while (1) {
		printf("\n 1 - Enque from rear");
		printf("\n 2 - Deque from front");
		printf("\n 3 - Enque from front");
		printf("\n 4 - Deque from rear");
		printf("\n 5 - Display");
		printf("\n 6 - Empty");
		printf("\n 7 - Exit");

		printf("\n Enter choice : ");
		scanf("%d", &ch);
		switch (ch) {
		case 1:
			enqueueRear();
			break;
		case 2:
			dequeueFront();
			break;
		case 3:
			enqueueFront();
			break;
		case 4:
			dequeueRear();
			break;
		case 5:
			display();
			break;
		case 6:
			isEmpty();
			break;
		case 7:
			exit(0);
		default:
			printf("Wrong choice, Please enter correct choice  ");
			break;
		}
	}

	return 1;
}

struct node* createNode() {
	int elem;
	struct node *curr;
	//
	printf("Enter value to be inserted");
	scanf("%d", &elem);
	curr = (struct node *) malloc(sizeof(struct node));
	curr->data = elem;
	curr->next = NULL;
	curr->prev = NULL;

	return curr;
}

void enqueueRear() {
	struct node *temp;

	if (rear == NULL) {
		temp = createNode();
		rear = temp;
		front = rear;
	} else {
		temp = createNode();
		rear->next = temp;
		temp->prev = rear;
		rear = temp;
	}
}

void enqueueFront() {
	struct node *temp;

	if (front == NULL) {
		temp = createNode();
		front = temp;
		rear = front;
	} else {
		temp = createNode();
		temp->next = front;
		front->prev = temp;
		front = temp;
	}
}

void display() {
	struct node *p;

	if ((front == NULL) && (rear == NULL)) {
		printf("\nQueue is empty\n");
		return;
	}
	printf("\nDisplaying the elements of the queue...\n");
	p = front;
	while (p != rear) {
		printf("%d --> ", p->data);
		p = p->next;
	}
	if (p == rear) {
		printf("%d -->", p->data);
	}
	printf("\n");
}

void dequeueFront() {
	struct node *p;

	p = front;
	if (p == NULL) {
		printf("\n Error: Trying to display elements from empty dequeue");
		return;
	} else if (p->next != NULL) {
		front = front->next;
		printf("\n Dequed value : %d\n", p->data);
		free(p);
	} else {
		printf("\n Dequed value : %d\n", p->data);
		free(p);
		front = NULL;
		rear = NULL;
	}
}

void dequeueRear() {
	struct node *p;

	p = rear;
	if (p == NULL) {
		printf("\n Error: Trying to display elements from empty dequeue");
		return;
	} else if (p->prev != NULL) {
		rear = rear->prev;
		printf("\n Dequed value : %d\n", p->data);
		free(p);
	} else {
		printf("\n Dequed value : %d\n", p->data);
		free(p);
		front = NULL;
		rear = NULL;
	}
}

void isEmpty() {
	if ((front == NULL) && (rear == NULL))
		printf("\n Queue empty\n");
	else
		printf("Queue not empty\n");
}
