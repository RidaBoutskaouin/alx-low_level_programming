#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @num: number to start
 * Return: void
 */

void print_to_98(int num)
{
int i;
if (num < 98)
{
for (i = num; i <= 98; ++i)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d\n", i);
}
}
else if (num > 98)
{
for (i = num; i >= 98; --i)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d\n", i);
}
}
else
printf("%d\n", num);
}

