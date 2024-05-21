#include "lists.h"
/**
 * free_listint - the actual function
 * LL is for linked list
 * @head: LL head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
