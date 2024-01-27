#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - get the node at this index
 * @h: pointer head
 * @idx: element index
 * @n: element to add
 * Return: node pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = temp;
		if (temp != NULL)
			temp->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->prev = temp;
	newnode->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = newnode;

	temp->next = newnode;

	return (newnode);
}
