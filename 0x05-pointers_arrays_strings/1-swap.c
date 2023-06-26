#include "main.h"
#include <stddef.h>

/**
 * swap_int - swap integers
 * @a: first integers to swap
 * @b: second integers to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
