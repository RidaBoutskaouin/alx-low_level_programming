#include "function_pointers.h"
#include <stddef.h>


/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of the first element for which
 * the cmp function does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}