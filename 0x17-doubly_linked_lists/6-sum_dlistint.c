#include "lists.h"

/**
 * sum_dlistint - returns the sum of all (n) of a dlistint_t linked list
 * @head: pointer to head of list
 * Return: sum of all the data (n) of a dlistint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

