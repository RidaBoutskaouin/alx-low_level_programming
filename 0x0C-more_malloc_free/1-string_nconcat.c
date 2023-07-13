#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings with a specific condition.
 * @s1:     The first string.
 * @s2:     The second string.
 * @n:      The number of bytes to concatenate from s2.
 * Return:  Pointer to the concatenated string
 * (or NULL if memory allocation fails).
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, n_cnct;
	int i, j;
	char *cncatndptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n >= len_s2)
	{
		n_cnct = len_s2;
	}
	else
	{
		n_cnct = n;
	}

	cncatndptr = malloc(len_s1 + n_cnct + 1);

	if (cncatndptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		cncatndptr[i] = s1[i];

	for (j = 0; s2[j] != '\0' && n != 0; j++)
	{
		cncatndptr[i + j] = s2[j];
		n--;
	}

	cncatndptr[i + j] = '\0';

	return (cncatndptr);


}


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

