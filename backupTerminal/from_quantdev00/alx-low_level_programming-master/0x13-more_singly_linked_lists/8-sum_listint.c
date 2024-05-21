#include "lists.h"
/**
 * sum_listint - the function
 * @head: head node
 *
 * Return: return an int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (0);
	while (head != 0)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum);
}
