#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @c: The character to check
 *
 * Return: Always 0 (Success)
 *
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
