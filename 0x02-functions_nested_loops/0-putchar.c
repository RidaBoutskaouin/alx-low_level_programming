#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *myChar = "_putchar";

    while (*myChar)
    {
        write(1, myChar, 1);
        myChar++;
    }
    write(1, "\n", 1);
    return (0);
}
