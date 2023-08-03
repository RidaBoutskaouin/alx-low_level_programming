#include "main.h"
#include <stddef.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int check;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		check = n >> i;

		if (check & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
			_putchar('0');
	}
}
