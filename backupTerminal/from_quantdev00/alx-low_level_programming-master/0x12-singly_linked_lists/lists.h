#ifndef _LISTS_H
#define _LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * struct list_t - new structure
 * @str: the string
 * @len: lenght of the string
 * @next: pointer to the next node
 */

/* Task 0 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;
size_t print_list(const list_t *h);

/* Task 1 */
size_t list_len(const list_t *h);

/* Task 2 */
list_t *add_node(list_t **head, const char *str);

/* Task 3 */
list_t *add_node_end(list_t **head, const char *str);

/* Task 4 */
void free_list(list_t *head);
#endif
