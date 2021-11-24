//============================================================================
// Name        : 288_QueueCircularDeque.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a circular dequeue.
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
void displayFromFront();
void displayFromRear();

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
		printf("\n 5 - Display from front");
		printf("\n 6 - Display from rear");
		printf("\n 7 - Empty");
		printf("\n 8 - Exit");

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
			displayFromFront();
			break;
		case 6:
			displayFromRear();
			break;
		case 7:
			isEmpty();
			break;
		case 8:
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
		rear->next = front;
		front->prev = rear;
	} else {
		temp = createNode();
		rear->next = temp;
		temp->prev = rear;
		rear = temp;
		rear->next = front;
		front->prev = rear;
	}
}

void enqueueFront() {
	struct node *temp;

	if (front == NULL) {
		temp = createNode();
		front = temp;
		rear = front;
		rear->next = front;
		front->prev = rear;
	} else {
		temp = createNode();
		temp->next = front;
		front->prev = temp;
		front = temp;
		rear->next = front;
		front->prev = rear;
	}
}

void displayFromFront() {
	struct node *p;

	if ((front == NULL) && (rear == NULL)) {
		printf("\nCircular Dequeue is empty\n");
		return;
	}
	printf("\nDisplaying the elements of the Circular Dequeue from front...\n");
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

void displayFromRear() {
	struct node *p;

	if ((front == NULL) && (rear == NULL)) {
		printf("\nCircular Dequeue is empty\n");
		return;
	}
	printf("\nDisplaying the elements of the Circular Dequeue from rear...\n");
	p = rear;
	while (p != front) {
		printf("%d --> ", p->data);
		p = p->prev;
	}
	if (p == front) {
		printf("%d -->", p->data);
	}
	printf("\n");
}

void dequeueFront() {
	struct node *p;

	p = front;
	if (p == NULL) {
		printf(
				"\n Error: Trying to display elements from empty circular dequeue");
		return;
	} else if (front == rear) {
		printf("\n Dequed value : %d\n", p->data);
		free(p);
		front = NULL;
		rear = NULL;
	} else {
		front = front->next;
		printf("\n Dequed value : %d\n", p->data);
		free(p);
	}
}

void dequeueRear() {
	struct node *p;

	p = rear;
	if (p == NULL) {
		printf(
				"\n Error: Trying to display elements from empty circular dequeue");
		return;
	} else if (front == rear) {
		printf("\n Dequed value : %d\n", p->data);
		free(p);
		front = NULL;
		rear = NULL;
	} else {
		rear = rear->prev;
		printf("\n Dequed value : %d\n", p->data);
		free(p);
	}
}

void isEmpty() {
	if ((front == NULL) && (rear == NULL)) {
		printf("\n Circular Dequeue is empty\n");
	} else {
		printf("Circular Deqeue not empty\n");
	}
}
