#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
char mychar;
for (mychar = 'z'; mychar >= 'a'; mychar--)
{
putchar(mychar);
}
putchar('\n');
return (0);
}
