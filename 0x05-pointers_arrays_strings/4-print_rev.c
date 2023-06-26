#include "main.h"

/**
 * print_rev - prints a revese of a string.
 * @s : string to print
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int j = 0;

	while (s[j] != 0)
	j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
