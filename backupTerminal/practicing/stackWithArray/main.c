#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "lists.h"

int main()
{
	bool ex = true;
	while (ex)
	{
		printf("---Make a Choice----\n");
		printf("1 -> Push in the stack\n");
		printf("2 -> Pop from the stack\n");
		printf("3 -> Display the stack\n");

		int choice = 0;
		printf("->");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				int n = 0;
				printf("Enter the number to add-> ");
				scanf("%d", &n);
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			default:
				printf("Nothing selected\n");
				break;
		}
		char c;
		printf("Want to continue ? (y / n)");
		scanf("%s", &c);

		if (c == 'y' || c == 'Y')
			ex = true;
		else
			ex = false;
	}
}
