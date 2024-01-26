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
	dlistint_t *current = *head;
	dlistint_t *temp = current;
	
	if (head == NULL)
		return (0);
	current = (dlistint_t*) malloc(sizeof(dlistint_t));

	current->n = n;
	current->prev = 0;
	current->next = 0;

	if (head == 0)
		*head = temp = current;
	else
	{
		temp->next = current;
		current->prev = temp;
		temp = current;
	}

	return (0);
}
