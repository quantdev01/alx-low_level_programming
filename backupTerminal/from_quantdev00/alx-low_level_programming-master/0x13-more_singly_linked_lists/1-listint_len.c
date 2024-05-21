#include "lists.h"
/**
 * listint_len - function to return the number of elements in a LL
 * @h: LL head;
 *
 * Return: return the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
