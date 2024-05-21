#include "lists.h"
/**
 * add_nodeint - the function
 * LL is for Linked List
 * @head: LL head
 * @n: the number to add
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp;
	*head = new;
	return (*head);
}
