#include "main.h"
/**
 * *str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concatString;
	int l1, l2, result;
	int i, j;

	if (s1 == NULL && s2 != NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL && s1 != NULL)
		s2 = "";
	else if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	l1 = strlen(s1);
	l2 = strlen(s2);
	result = l1 + l2;
	concatString = malloc(result + 1 * (sizeof(char)));
	if (concatString == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		concatString[i] = s1[i];
	}
	j = 0;
	for (i = l1; i < result + l1; i++)
	{
		concatString[i] = s2[j];
		j++;
	}
	concatString[result] = '\0';
	return (concatString);
}
