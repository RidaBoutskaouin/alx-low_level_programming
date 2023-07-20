#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns sum of all its parameters.
 * @n: number of parameters.
 * Return: sum of all parameters.
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list args;

	if (n == 0)
	return (0);


	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		unsigned int h = va_arg(args, unsigned int);

		sum += h;
	}
	return (sum);
}
