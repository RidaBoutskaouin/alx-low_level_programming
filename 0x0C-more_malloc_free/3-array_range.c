#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * array_range - makes an array with int numbers 
 * @min: start number
 * @max: end number
 *
 * Return: pointer to arr or null
 */

int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = min; i <= (max - min); i++, j++)
		ptr[i] = j;

	return (ptr);
}
