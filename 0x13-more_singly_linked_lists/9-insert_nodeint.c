#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function inserts a new node at a given position.
 * @head: the list.
 * @idx: index to be inseted in.
 * @n: n of node.
 * Return: adress of node or NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	unsigned int i;
	listint_t *new_node;
	listint_t *temp;

	if (idx == 0 || *head == NULL)
	{

		temp = malloc(sizeof(listint_t));

		if (temp == NULL)
			return (NULL);

		temp->n = n;

		temp->next = *head;

		*head = temp;
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
