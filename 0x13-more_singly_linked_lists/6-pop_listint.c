#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: The n stored in the head node.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	return (0);

	temp = *head;
	n = temp->n;

	*head = (*head)->next;
	free(temp);

	return (n);
}

