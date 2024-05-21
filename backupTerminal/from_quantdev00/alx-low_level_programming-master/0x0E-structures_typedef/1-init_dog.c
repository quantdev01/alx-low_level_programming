#include "dog.h"

/**
 * init_dog - function init struct
 * struct dog - the structure
 * @d: the dog stucture
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*d = malloc(sizeof(struct dog));*/
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
