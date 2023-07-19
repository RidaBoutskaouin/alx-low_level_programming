#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that prints a name.
 * @name: name to print
 * @f: function to call
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
