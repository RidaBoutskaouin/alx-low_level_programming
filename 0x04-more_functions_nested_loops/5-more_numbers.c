#include "main.h"

/**
 * more_numbers - prints 10 times numbers,from 0 to 14, followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int m, n;

	for (n = 0; n < 10; n++)
	{
		for (m = 0 ; m <= 14 ; m++)
		{
			if (m >= 10)
			{
				_putchar(m / 10 + 48);
			}
			_putchar(m % 10 + 48);
		}
		_putchar('\n');
	}
}
