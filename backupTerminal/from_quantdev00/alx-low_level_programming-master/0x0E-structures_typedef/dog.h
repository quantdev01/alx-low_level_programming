#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - create a dog with name, age and owner
 *
 * @name: member 1
 * @age: dog age
 * @owner: owner name
 *
 * Description: just create a struct with those members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* new name for the dog */
typedef struct dog dog_t;

/* Dog prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* dog_t prototype */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
