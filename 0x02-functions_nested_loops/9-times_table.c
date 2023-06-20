#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
int a, b, c, l, m;
for (a = 0; a <= 9; a++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (b = 1; b <= 9; b++)
{
c = a * b;
l = c / 10;
m = c % 10;
if (c <= 9)
{
_putchar(' ');
_putchar(m + '0');
}
else
{
_putchar(l + '0');
_putchar(m + '0');
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

}
