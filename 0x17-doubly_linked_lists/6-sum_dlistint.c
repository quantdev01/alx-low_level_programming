#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - return the number of n
 * @h: pointer to head of list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *h)
{
        const dlistint_t *temp;
        int sum = 0;

        temp = h;
        while (temp != 0)
        {
                sum = sum + temp->n;
                temp = temp->next;
        }
        return (sum);
}
