#include "lists.h"
#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

int stack[SIZE];
int top = -1;
// Function to push or add element at the top of the stack
void push(int n)
{
	if (top == SIZE - 1)
		printf("cant\'t add here\n");
	else
	{
		top++;
		stack[top] = n;
		printf("Pushed correly\n");
	}
}

// Function to delete the top element from stack

void pop()
{
	int temp_item = 0;
	if (top == -1)
		printf("The list is empty\n");
	else
	{
		temp_item = top;
		top--;
		printf("Item removed is %d\n",temp_item);
	}
}

// Function to display from the top fo the stack
void display()
{
	if (top == -1)
		printf("Nothing to print\n");
	else
	{
		int i;

		// Top meand the latest items inserted
		for (i = top; i >= 0; i--)
		{
			printf("displayed %d\n", stack[i]);
		}
	}
}
