#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 *
 * @separator: seperator.
 * @n: number of parameters
 * Return: void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myargs;

	va_start(myargs, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			unsigned int helper = va_arg(myargs, unsigned int);

			if (i == n - 1)
			{
				printf("%d\n", helper);

			} else
			{
				printf("%d", helper);
				printf("%s", separator);
			}
		}
	}
}
