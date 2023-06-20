#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int i;
for (i = 0; i < 26 ; i++)
_putchar(97 + i);

_putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
