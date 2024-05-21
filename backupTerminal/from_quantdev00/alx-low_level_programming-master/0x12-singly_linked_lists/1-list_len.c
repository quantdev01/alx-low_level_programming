#include "lists.h"
/**
 * list_len - will return the number of elements in a L.L
 * @h: the linked list head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != 0)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
