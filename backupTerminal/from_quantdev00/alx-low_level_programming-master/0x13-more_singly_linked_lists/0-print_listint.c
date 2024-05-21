#include "lists.h"
/**
 * print_listint - function
 * LL for linked list
 * @h: LL header
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
