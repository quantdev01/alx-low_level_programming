#include <stdio.h>
/**
 * main - main function
 * @argc: args int
 * @argv: args char
 *
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
