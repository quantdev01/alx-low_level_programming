#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node value at the beginning
 * @head: pointer head
 * @n: data to add
 * Return: node pointer
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *tail = *head;

	if (newnode == NULL)
	{
		printf("Error while creating the value\n");
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = 0;
	newnode->next = 0;

	if (*head == NULL)
	{
		*head = tail = newnode;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
		newnode->prev = tail;
	}
	return (newnode);
}
