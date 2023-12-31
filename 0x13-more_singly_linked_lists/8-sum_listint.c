#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum n's.
 * @head: the list
 * Return: sum of n's;
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

