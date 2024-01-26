#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: pointer head
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
