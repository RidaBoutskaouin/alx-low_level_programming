#include "main.h"

/**
 * _strncat - appends not more than n characters from src to dest
 * @dest: the destination string
 * @src: The source string
 * @n: number of characters to append
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}

