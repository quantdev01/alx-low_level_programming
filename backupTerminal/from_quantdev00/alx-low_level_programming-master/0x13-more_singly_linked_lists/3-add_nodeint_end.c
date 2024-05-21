#include "lists.h"
/**
 * add_nodeint_end - the function
 * @head: the Linked list head
 * @n: th number to add
 *
 * Return: the new element address or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (new->n == 0)
	{
		free(new);
		return (NULL);
	}
	new->next = (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
