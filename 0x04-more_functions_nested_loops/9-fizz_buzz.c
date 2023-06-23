#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0
 */

int main(void)
{

	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (m % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			if (m >= 10)
			{
				putchar(m / 10 + 48);
			}
			putchar(m % 10 + 48);
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

