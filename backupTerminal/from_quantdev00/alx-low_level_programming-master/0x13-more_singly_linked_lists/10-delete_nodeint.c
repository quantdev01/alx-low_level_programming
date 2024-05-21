#include "lists.h"
/**
 * delete_nodeint_at_index - the function
 * @head: head
 * @index: int something
 *
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 1;
	listint_t *new, *temp;

	if (*head == 0)
		return (0);
	temp = *head;
	while (counter < index - 1)
	{
		temp = temp->next;
		counter++;
	}
	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}
