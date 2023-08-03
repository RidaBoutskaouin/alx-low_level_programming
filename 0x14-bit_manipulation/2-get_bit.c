#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of the bit to be returned
 * Return: value of the bit or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned int size;
	unsigned long int res;

	size = sizeof(n) * 8;

	if (index > size)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	res = n & 1;
	return (res);
}
