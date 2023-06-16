#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
char mych;
for (mych = 'a'; mych <= 'z'; mych++)
{
if (mych == 'e' || mych == 'q')
{
continue;
}
putchar(mych);
}
putchar('\n');
return (0);
}
