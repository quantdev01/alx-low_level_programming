#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - the function to create new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: returning new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/**
	 * struct new_dog - new structure;
	 */
	dog_t *new_dog = malloc(sizeof(*new_dog));
	dog_t *copy = malloc(sizeof(*copy));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (new_dog);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	/* copy storing */
	copy->name = name;
	copy->owner = owner;


	if (new_dog != NULL)
		return (new_dog);

	return (NULL);
	free(new_dog);
}
