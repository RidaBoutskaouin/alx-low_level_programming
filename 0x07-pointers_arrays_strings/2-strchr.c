#include "main.h"

/**
 * *_strchr - finds a character in a string.
 * @s: This is the string to be checked
 * @c: This is the character to be searched in s
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}

	return (0);
}
