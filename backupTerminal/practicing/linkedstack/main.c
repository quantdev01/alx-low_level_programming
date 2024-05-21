#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int data;
	struct node *next;
}typedef stack;

stack *top = 0;

void push(int n)
{
	stack *newnode = malloc(sizeof(stack*));

	if (top == 0)
		printf("Node is empty\n");
	else
	{
		newnode->data = n;
		newnode->next = top;
		top = newnode;
	}
}

void display()
{
	stack *temp = top;

	if (top == 0)
		printf("Nothing to delete\n");
	else
	{
		while (temp != NULL)
		{
			printf("Stack %d\n", temp->data);
			temp = temp->next;
		}
	}
}

void pop()
{
	stack *temp = top;

	if (top == NULL)
		printf("The node is empty\n");
	else
	{
		top = temp->next;
		free(temp);
	}
}


int main()
{
	int choice = 1;
	while (choice == 1){
		int n = 0;
		printf("Add a number\n");
		scanf("%d", &n);
		push(n);



		printf("Whant to continue (1 or 0) ");
		scanf("%d", &choice);

	}
	printf("Displaying the node\n");
	display();
	pop();
	printf("Diaplay after pop\n");
	display();
	return 0;

}
