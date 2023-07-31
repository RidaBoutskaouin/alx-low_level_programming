#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints and returns the number of elements in a list.
 * @h: the list to print.
 * Return: number of nodea.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

