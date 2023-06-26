#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */


void rev_string(char *s)
{
	int beg = 0;
	int fin;
	int len = 0;

	while (s[len] != '\0')
	len++;

	fin = len - 1;

	while (beg < fin)
	{
		char temp = s[beg];

		s[beg] = s[fin];
		s[fin] = temp;

		beg++;
		fin--;
	}
}
