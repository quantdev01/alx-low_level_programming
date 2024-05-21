#include "main.h"
/**
 * *create_array - function to create an array
 * @size: array size to allocate
 * @c: the character to put in the array
 *
 * Return: a char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *myArray;

	if (size == 0)
		return (NULL);

	myArray = malloc(size * sizeof(char));
	if (myArray == NULL)
		exit(1);
	for (i = 0; i < size; i++)
		myArray[i] = c;

	if (myArray != NULL)
	{
		return (myArray);
	}
	else
	{
		return (NULL);
	}
}
