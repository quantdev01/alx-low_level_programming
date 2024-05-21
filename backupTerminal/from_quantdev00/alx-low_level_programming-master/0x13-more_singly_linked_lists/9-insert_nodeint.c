#include "lists.h"
/**
 * insert_nodeint_at_index - the function
 * @head: node head
 * @idx: index
 * @n: the number to add
 *
 * Return: a node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *temp;
	listint_t *new;

	if (idx > i)
	{
		return (NULL);
	}
	else
	{
		temp = *head;
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = temp->next;
		temp->next=new;
	}
	return (new);
}
