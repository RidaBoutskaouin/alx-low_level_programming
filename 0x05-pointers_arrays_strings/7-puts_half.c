#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to prints
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	;
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = ((i - 1) / 2) + 1 ; j < i; j++)
		_putchar(str[j]);
	}
	_putchar('\n');
}

