#include "main.h"

/**
 * find_root - finds the root of a number
 * @n: number to find its root
 * @r: number to start with
 * Return: root of the number;
 */

int find_root(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r <= n)
		return (find_root(n, r + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - finds the root of a number
 * @n: number to find the root
 * Return: the root of the number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
	return (n);

	return (find_root(n, 2));
}
