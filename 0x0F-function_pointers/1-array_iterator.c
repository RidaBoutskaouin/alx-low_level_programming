#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function that executes a function
 * @array: array to do action of each element.
 * given as a parameter on each element of an array.
 * @size: size of the array.
 * @action: action: pointer to the function we need to use.
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
