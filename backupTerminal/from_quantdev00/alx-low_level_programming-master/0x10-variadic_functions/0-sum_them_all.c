#include "variadic_functions.h"
/**
 * sum_them_all - will sum undefine number of parametters
 * @n: number of parameters
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	return (sum);
}
