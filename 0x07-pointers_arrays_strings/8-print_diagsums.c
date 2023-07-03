#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: the array
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, x, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	sum1 += a[i];

	for (x = size - 1; x <= (size * size) - size; x += size - 1)
	sum2 += a[x];
	printf("%d, %d\n", sum1, sum2);
}
