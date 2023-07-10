#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character to be filled.
 * Return: Returns a pointer to the array, or NULL if it fails or size is 0
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pArr = (char *) malloc(size * sizeof(char));

	if (size == 0)
		return (0);

	if (pArr == NULL)
	return (0);

	for (i = 0; i < size; i++)
	pArr[i] = c;

	return (pArr);
}
