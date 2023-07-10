#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string,
 *         or NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
	int i, j;
	char *cpstr;

	if (str == NULL)
		return (0);


	for (i = 0; str[i] != '\0'; i++)
	;

	cpstr = malloc((i + 1) * sizeof(char));

	if (cpstr == NULL)
		return (0);

	for (j = 0; str[j] != '\0'; j++)
		cpstr[j] = str[j];

	cpstr[j] = '\0';

	return (cpstr);
}
