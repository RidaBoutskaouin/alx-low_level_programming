#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory containing
 *         the concatenated string, or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, cnt = 0;
	char *cntstr;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";



	for (i = 0; s1[i] != '\0'; i++)
	;

	for (j = 0; s2[j] != '\0'; j++)
	;

	k = i + j + 1;

	cntstr = malloc(k * sizeof(char));

	if (cntstr == NULL)
		return (0);

	j = 0;

	while (cnt < k)
	{
		if (cnt < i)
			cntstr[cnt] = s1[cnt];
		else
		{
			cntstr[cnt] = s2[j];
			j++;
		}
		cnt++;
	}
	cntstr[cnt] = '\0';
	return (cntstr);
}
