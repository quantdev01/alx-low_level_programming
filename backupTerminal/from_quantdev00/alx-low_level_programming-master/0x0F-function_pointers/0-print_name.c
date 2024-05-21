#include "function_pointers.h"
/**
 * print_name - function to print the name by getting a function
 * @name: the name
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
