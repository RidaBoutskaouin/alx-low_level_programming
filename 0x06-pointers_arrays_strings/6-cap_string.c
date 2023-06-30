#include "main.h"

/**
 * cap_string - function that Capitalizes all words of a string.
 * @s: char to capitalize
 * Return: s
 */

char *cap_string(char *s)
{
	int i, j;
	char seps[13] = {' ', '\t', '\n', ',', '.', ';', '!',
		'?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == seps[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}

