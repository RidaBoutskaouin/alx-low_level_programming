#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 * Return: Pointer to the allocated memory
 * (or NULL if allocation fails or nmemb/size is 0).
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);

}
