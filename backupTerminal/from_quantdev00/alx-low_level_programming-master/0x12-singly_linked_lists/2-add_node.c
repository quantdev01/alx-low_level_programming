#include "lists.h"
/**
 * add_node - the actuall function
 * @head: pointer head
 * @str: the string to add
 *
 * Return: return address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = temp;
	*head = new;
	return (*head);
}
