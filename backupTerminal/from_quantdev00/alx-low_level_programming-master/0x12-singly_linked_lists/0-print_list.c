#include "lists.h"
/**
 * print_list - will print all elements of a list_t
 * @h: the list;
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		counter++;
	}
	return (counter);
}
