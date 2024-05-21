#include "function_pointers.h"
/**
 * array_iterator - function to iterate an array
 * @array: the actual array
 * @size: array size
 * @action: function pointer to iterate;
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
