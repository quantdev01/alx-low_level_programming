#include "main.h"
/**
 * *_strdup - function to create an array
 * @str: array size to allocate
 *
 * Return: a char
 */
char *_strdup(char *str)
{
	char *str1;
	int length;

	if (str == NULL)
		return (NULL);
	length = strlen(str);
	str1 = malloc(length + 1 * sizeof(char));
	if (str1 == NULL)
		return (NULL);
	strcpy(str1, str);
	return (str1);
}
