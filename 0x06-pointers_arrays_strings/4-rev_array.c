#include "main.h"

/**
 * reverse_array - it reverse an array
 * @a: the array to reverse
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j = n - 1, swp = 0;

	for (i = 0; i < n / 2; i++)
	{
		swp = a[i];
		a[i] = a[j];
		a[j] = swp;
		j--;
	}
}
