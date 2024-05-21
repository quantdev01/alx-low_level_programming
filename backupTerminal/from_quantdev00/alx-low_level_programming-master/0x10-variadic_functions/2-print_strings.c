#include "variadic_functions.h"
/**
 * print_strings - function variadic to print strings
 * @separator: string separator
 * @n: string numbers
 *
 * Return: returning nothing because it's a void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *arg = va_arg(ap, char *);

		if (arg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", arg);
		}
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
