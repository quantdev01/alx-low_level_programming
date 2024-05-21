#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: args int
 * @argv: args char
 *
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	if (argc == 3)
	{
		int a, b;
		int result;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
