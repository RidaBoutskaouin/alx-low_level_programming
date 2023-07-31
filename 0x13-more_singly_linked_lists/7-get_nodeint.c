#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node.
 * @head: the list
 * @index: index of the node.
 * Return: the node or null.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr_node;
	unsigned int count = 0;

	curr_node = head;

	while (curr_node != NULL)
	{
		if (count == index)
		return (curr_node);

		curr_node = curr_node->next;
		count++;
	}
	return (NULL);
}

