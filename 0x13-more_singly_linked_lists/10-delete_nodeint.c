#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node at index.
 * @head: the list.
 * @index: index.
 * Return: 1 or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *prev = NULL;
	unsigned int i = 0;
	listint_t *first;


	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		first = *head;
	*head = (*head)->next;
		free(first);
		return (1);
	}

	curr = *head;
	while (curr != NULL && i < index)
	{
		prev = curr;
		curr = curr->next;
		i++;
	}

	if (curr == NULL)
	return (-1);

	prev->next = curr->next;
	free(curr);
	return (1);
}

