#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - function to set value
 * @ht: pointer to hashtable
 * @key: key value
 * @value: value to insert
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *temp = ht;

	if (key == "")
		return (NULL);

}
