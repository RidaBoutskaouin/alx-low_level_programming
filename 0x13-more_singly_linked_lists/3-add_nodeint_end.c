#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The number to be given to new node.
 * Return: Address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *curr;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		curr = *head;
		while (curr->next != NULL)
		curr = curr->next;

		curr->next = new_node;
	}

	return (new_node);
}


