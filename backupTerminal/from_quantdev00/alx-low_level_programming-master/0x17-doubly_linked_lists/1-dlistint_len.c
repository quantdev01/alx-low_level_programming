#include "lists.h"
/*
 * dlistint_len - return len list
 *
 * @h : head linked list
 * Return : 0
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
const dlistint_t *temp = h;

while (temp != NULL)
{
temp = temp->next;
i++;
}
return (i);
}
