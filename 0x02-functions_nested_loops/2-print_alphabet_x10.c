#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet x10, in lowercase.
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 26 ; i++)
_putchar(97 + i);

_putchar('\n');
}
}
