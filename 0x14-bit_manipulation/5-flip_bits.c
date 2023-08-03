#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number
 * @m: number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size;
	unsigned int i;
	unsigned int count;

	size = sizeof(n) * 8;
	count = 0;

	for (i = 0; i < size; i++)
	{
		if (((n ^ m) >> i) & 1)
			count++;
	}
	return (count);
}
