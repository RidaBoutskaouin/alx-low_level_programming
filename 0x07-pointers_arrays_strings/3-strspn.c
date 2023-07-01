#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to check
 * @accept: string to match
 * Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;

		while (accept[j] != '\0' && s[i] != accept[j])
		j++;

		if (accept[j] == '\0')
		return (i);
	}
	return (i);
}
