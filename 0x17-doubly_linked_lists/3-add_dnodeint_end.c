#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list
 * @n: value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* create new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	/* put data in new node */
	new_node->n = n;
	new_node->next = NULL;

	/* if list is empty, new node is head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* else traverse till last node */
	while (last->next != NULL)
		last = last->next;

	/* change next of last node */
	last->next = new_node;

	/* make last node as previous of new node */
	new_node->prev = last;

	return (new_node);
}
