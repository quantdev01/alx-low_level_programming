#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size) {
	unsigned int i = 0;
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hash_table == NULL) {
		return NULL;
	}

	hash_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL) {
		free(hash_table);
		return NULL;
	}

	hash_table->size = size;
	/*for (unsigned long int i = 0; i < size; i++) {
		hash_table->array[i] = NULL;
	} */
	while (i < size)
	{
		hash_table->array[i] = NULL;
		i++;
	}

	return hash_table;
}

