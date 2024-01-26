#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node value at the beginning
 * @head: pointer head
 * @n: data to add
 * Return: node pointer
 * 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp = *head;

	/* if (head == NULL)
		return (0);
	*/
	newnode = (dlistint_t*)malloc(sizeof(dlistint_t));

	newnode->n = n;
	newnode->prev = 0;
	newnode->next = 0;

	if (head == NULL)
	{
		*head = temp = newnode;
	}
	else
	{
		temp->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
