#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - return the number of n
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int n;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != 0)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
