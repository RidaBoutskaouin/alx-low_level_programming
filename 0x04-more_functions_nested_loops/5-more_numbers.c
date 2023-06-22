#include "main.h"

/**
 * more_numbers - prints 10 times numbers,from 0 to 14, followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
		}
		for (j = 48; j <= 52; j++)
		{
			_putchar('1');
			_putchar(j);
		}
		_putchar('\n');
	}
}
