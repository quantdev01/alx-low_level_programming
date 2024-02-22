#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - function to set value
 * @ht: pointer to hashtable
 * @key: key value
 * @value: value to insert
 *
 * Return: Return 1 if successful or 0 not
 */

int hash_table_set(hash_table_t *ht, const char *key, char *value)
{
	unsigned long int index = key_index(key, ht->size);

	if (ht == NULL)
		return (0);

	if (ht->array[index] != NULL)
		/* To handle colision */
		return (0);

	ht->array[index]->value = value;
	return (1);
}
