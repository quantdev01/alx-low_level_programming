#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "string.h"
#define MAXHASH 20
#define MAXSTR 15

typedef struct
{
	char name[MAXSTR];
	int age;
}person;

person *hash_table[MAXSTR];

unsigned int hash(char *str)
{
	unsigned long int hash_value;
	int c;

	hash_value = 5381;
	while ((c = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + c; /* hash * 33 + c */
	}
	return (hash_value) % MAXHASH;
}

void init_hash_table()
{
	int i;

	for (i = 0; i < MAXHASH; i++)
		hash_table[i] = NULL;
	printf("Table initialized to NULL\n");
}

void print_hash_table()
{
	int i;

	printf("My Hash Table\n");
	for (i = 0;i < MAXHASH; i++)
		if (hash_table[i] == NULL)
			printf("[%d] ->\n", i);
		else
			printf("[%d] -> %s with age : %d\n", i, hash_table[i]->name, hash_table[i]->age); 
}

bool hash_table_insert(person *p)
{
	if (p == NULL)
		return false;

	int index = hash(p->name);

	if (hash_table[index] != NULL)
		return false;

	hash_table[index] = p;

	return true;
}

person *hash_table_get(char *name)
{
	printf("Getting the element\n");
	int index = hash(name);
	if (hash_table[index] != NULL && strcmp(hash_table[index]->name, name) == 0)
		return hash_table[index];
	else
		return NULL;
}
void *hash_table_delete(char *name)
{
	int index = hash(name);

	if (hash_table_get(name) != NULL)
	{
		hash_table[index] = NULL;
		printf("%s deleted\n", name);
	}
	else
		printf("%s not found\n", name);
}

int main()
{
	init_hash_table();
	print_hash_table();

	person tabitha = {"Tabitha", 27};
	person siloe = {"Siloe", 24};
	person daniel = {"Daniel", 22};
	person carmel = {"Carmel", 20};
	person mardo = {"Mardo", 18};
	person alliance = {"Alliance", 16};
	person christopher = {"Christopher", 10};
	person nobody = {"Nobody", 3};

	hash_table_insert(&tabitha);
	hash_table_insert(&siloe);
	hash_table_insert(&daniel);
	hash_table_insert(&carmel);
	hash_table_insert(&mardo);
	hash_table_insert(&alliance);
	hash_table_insert(&christopher);
	hash_table_insert(&nobody);
	

	print_hash_table();

	person *temp = hash_table_get("Daniel");

	if (temp == NULL)
		printf("Not found\n");
	else
		printf("Found in table : %s\n", temp->name);

	hash_table_delete("Nobody");

	/*printf("Name: James, index : %d\n", hash("James"));
	  printf("Name: Ruth, index : %d\n", hash("Ruth"));
	  printf("Name: John, index : %d\n", hash("John"));
	  printf("Name: Giannis, index : %d\n", hash("Giannis"));
	  printf("Name: Morant, index : %d\n", hash("Morant"));
	  */

}
