#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int main()
{
	unqueue(1);
	unqueue(2);
	unqueue(3);
	unqueue(4);
	unqueue(5);
	display();
	dequeue();
	dequeue();
	display();
	unqueue(10);
	unqueue(11);
	unqueue(12);
	display();

	return 0;
}
