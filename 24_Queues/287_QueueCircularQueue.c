//============================================================================
// Name        : 287_QueueCircularQueue.c
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Develop a program to implement a circular queue.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
}*front, *rear;

void enqueue();
void dequeue();
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
		printf("\n 3 - Display");
		printf("\n 4 - Empty");
		printf("\n 5 - Exit");

		printf("\n Enter choice : ");
		scanf("%d", &ch);
		switch (ch) {
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			isEmpty();
			break;
		case 5:
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

	return curr;
}

void enqueue() {
	struct node *temp;

	if (rear == NULL) {
		temp = createNode();
		rear = temp;
		front = rear;
		rear->next = front;
	} else {
		temp = createNode();
		rear->next = temp;
		rear = temp;
		rear->next = front;
	}
}

void display() {
	struct node *p;

	if ((front == NULL) && (rear == NULL)) {
		printf("\nCircular Queue is empty\n");
		return;
	}
	printf("\nDisplaying the elements of the circular queue...\n");
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

void dequeue() {
	struct node *p;

	p = front;
	if (p == NULL) {
		printf(
				"\n Error: Trying to display elements from empty circular queue");
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

void isEmpty() {
	if ((front == NULL) && (rear == NULL))
		printf("\n Circualr Queue is empty\n");
	else
		printf("Circular Queue is not empty\n");
}
