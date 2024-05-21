#include "lists.h"
/**
 * free_listint2 - the actual function
 * LL is for linked list
 * @head: the LL header
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{

	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
