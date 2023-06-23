#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a neew line.
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int m, n, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (m = 1; m <= size; m++)
	{
		for (n = size - m; n > 0; n--)
			_putchar(' ');
		for (k = 1; k <= m; k++)
			_putchar('#');
		_putchar('\n');
	}
}
