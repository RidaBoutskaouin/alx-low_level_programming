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

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(myargs, unsigned int));
	}

	va_end(myargs);
	printf("\n");

}
