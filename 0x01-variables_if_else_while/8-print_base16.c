#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
char mychar;
for (mychar = '0'; mychar <= '9'; mychar++)
{
putchar(mychar);
}
for (mychar = 'a'; mychar <= 'e'; mychar++)
{
putchar(mychar);
}
putchar('\n');
return (0);
}
