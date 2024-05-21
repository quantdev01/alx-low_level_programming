#include "lists.h"
/**
 * pop_listint - the function
 * @head: the LL head
 *
 * Return: return the node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *my_n;
	int x;

	my_n = *head;
	if (*head == NULL)
		return (0);
	*head = my_n->next;
	x = my_n->n;
	free(my_n);
	return (x);
}
