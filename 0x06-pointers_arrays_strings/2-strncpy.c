#include "main.h"

/**
 * _strncpy - copies not more than n characters from src to dest
 * @dest: the destination string
 * @src: The source string
 * @n: number of characters to copy
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
	}

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}


