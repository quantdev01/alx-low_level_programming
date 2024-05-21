#include "main.h"
/**
 * get_square_of_i - function to get the n square of i
 * @n: the number to do square on i
 * @i: the times of square
 *
 * Return: the square on i of the given number;
 */
int get_square_of_i(int n, int i)
{
	int j = 1;

	if (i == 0)
		return (1);
	if (i == 1)
		return (n);
	while (j < i)
	{
		n = n * 2;
		j++;
	}
	return (n);
}
/**
 * binary_to_uint - the function
 * @b: the char of binary numbers
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int *tab = malloc(sizeof(int)*strlen(b)-1);
	unsigned int  i, value;
	unsigned int result;
	int stringLen = strlen(b);
	const char *myString = malloc(sizeof(char)*strlen(b));
	myString = b;
	printf("%d", myString[2]);

	/* Cheking if b is NULL */
	if (b == NULL)
		return (0);

	/* Checking if any alement of b is not 1 or 0 to return 0 */
	for (i = 0; i < stringLen; i++)
	{
		value = myString[i];
		if (value != 0 || value != 1)
			return (0);
		tab[i] = atoi(myString[i]);
	}
	/* now tab is equal to elements of b */
	
	/* converting the suit of binaries now with the function above */
	result = 0;
	i = stringLen;
	while (i >= 1)
	{
		result = get_square_of_i(b[i], i) + result;
		i--;
	}
	return (result);
}
