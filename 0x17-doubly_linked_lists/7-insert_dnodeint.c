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
	unsigned int i = 1;

	newnode = malloc(sizeof(dlistint_t));

	newnode->n = n;

	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;
	return (newnode);
}
