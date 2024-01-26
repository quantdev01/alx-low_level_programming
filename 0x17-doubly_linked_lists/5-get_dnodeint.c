#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at this index
 * @head: pointer head
 * @index: element at this index
 * Return: node pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	dlistint_t *new;
	unsigned int i = 0;

	while (temp->next != 0)
	{
		if (index == i)
			new = temp;
		temp = temp->next;
		i++;
	}
	return new;
}
