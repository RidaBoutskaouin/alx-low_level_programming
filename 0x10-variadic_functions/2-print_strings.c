#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: separator.
 * @n: number of parametres.
 * Return: void.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list the_args;
	char *w;

	va_start(the_args, n);

	for (i = 0; i < n; i++)
	{
		w = va_arg(the_args, char *);

		if (i > 0 && separator != NULL)
			printf("%s", separator);

		if (w == NULL)
			printf("(nil)");
		else
			printf("%s", w);
	}
	va_end(the_args);
	printf("\n");
}
