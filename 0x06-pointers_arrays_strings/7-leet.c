#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string to encodes
 * Return: s
 */

char *leet(char *s)
{
	int i, j;
	char *alphs = "aAeEoOtTlL";
	char *nums = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == alphs[j])
			s[i] = nums[j];
		}
	}
	return (s);
}
