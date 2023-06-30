#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string to encode
 * Return: str
 */

char *rot13(char *str)
{
	int i, j;
	char normalalphs[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13alphs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; normalalphs[j] != '\0'; j++)
		{
			if (str[i] == normalalphs[j])
			{
				str[i] = rot13alphs[j];
				break;
			}

		}
	}
	return (str);
}
