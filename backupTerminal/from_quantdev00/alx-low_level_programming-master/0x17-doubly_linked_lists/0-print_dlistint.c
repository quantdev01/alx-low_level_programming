#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h : head
 * Return: Always Exit sucess
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
