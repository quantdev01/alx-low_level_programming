#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp->next != 0)
	{
		temp = temp->next;
		free(temp);
	}
	free(head);
}
