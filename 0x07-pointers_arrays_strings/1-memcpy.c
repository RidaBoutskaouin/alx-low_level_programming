#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination area
 * @src: source area
 * @n: number of bytes of the memory to be copied.
 * Return: the string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

