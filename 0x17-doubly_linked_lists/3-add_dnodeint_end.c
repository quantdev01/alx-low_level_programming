#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node value at the beginning
 * @head: pointer head
 * @n: data to add
 * Return: node pointer
 */

dlistint_t *tail;

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	newnode->n = n;
	newnode->prev = 0;
	newnode->next = 0;

	if (*head == 0)
		*head = tail = newnode;
	else
	{
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
	return (newnode);
}
