#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to get the length of.
 * Return: integer the length of the string
 */

int _strlen(char *s)
{
	int cnt;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	;
	return (cnt);
}
