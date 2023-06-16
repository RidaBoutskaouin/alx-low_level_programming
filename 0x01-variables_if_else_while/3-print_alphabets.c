#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
char chl, chU;
for (chl = 'a'; chl <= 'z' ; chl++)
{
putchar(chl);
}


for (chU = 'A'; chU <= 'Z'; chU++)
{
putchar(chU);
}

putchar('\n');
return (0);
}
