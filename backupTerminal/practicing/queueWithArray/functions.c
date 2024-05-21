#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define SIZE 100

int queue[SIZE];

int front = -1; // head element
int rear = -1; // tail element 

void unqueue(int n)
{

	printf("[%d] added\n", n);
	if (rear == SIZE - 1)
	{
		printf("Stack is full\n");
	}
	else if (front == -1 && rear == -1)
	{

		rear = front = 0;
		queue[rear] = n;
	}
	else
	{
		rear++;
		queue[rear] = n;
	}
}

void dequeue()
{
	if (front == - 1 && rear == -1)
		printf("Empty queue\n");
	else if(front == rear)
		front = rear = - 1;
	else
	{
		printf("This has been removed %d\n", queue[front]);
		front++;
	}
}

void display()
{
	int i;

	if (front == - 1 && rear == -1)
		printf("Empty queue\n");
	else
	{
		printf("---Displaying Queue----\n");
		for (i = front; i <= rear; i++)
		{
			printf("%d", queue[i]); 
			printf(" | ");
		}
		printf("\n");
	}
}
