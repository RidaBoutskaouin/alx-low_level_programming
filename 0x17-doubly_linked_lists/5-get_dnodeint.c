#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current_node;

	if (head == NULL)
		return (NULL);

	current_node = head;
	for (i = 0; i < index; i++)
	{
		if (current_node->next == NULL)
			return (NULL);
		current_node = current_node->next;
	}
	return (current_node);
}

