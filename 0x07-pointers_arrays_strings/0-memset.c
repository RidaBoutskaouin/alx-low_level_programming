#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory to be filled.
 * @b: the char to fill with.
 * @n: number of bytes of the memory to fill
 * Return: the string filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;

	return (s);
}
