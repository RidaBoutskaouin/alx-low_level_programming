#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: Always 0 (Success)
 *
 */

int print_last_digit(int n)
{
int l_d;
if (n < 0)
{
l_d = (n % 10) * -1;
_putchar(l_d + '0');
return (l_d);
}
else
{
l_d = n % 10;
_putchar(l_d + '0');
return (l_d);
}
return (0);
}
