#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to prints
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j;
	int len = 0;

	while (str[len] != 0)
	len++;

	if (len % 2 == 0)
	{
		int half = len / 2;

		for (i = half; i <= len ; i++)
			_putchar(str[i]);
	}
	else
	{
		int halfOdd = (len - 1) / 2;

		for (j = halfOdd + 1; j <= len; j++)
			_putchar(str[j]);

	}
	_putchar('\n');

}
