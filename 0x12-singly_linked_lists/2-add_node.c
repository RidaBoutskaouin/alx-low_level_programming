#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be given to new node.
 * Return: Address of the new node, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int new_node_len;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node_len = _strlen(str);
	new_node->len = new_node_len;

	new_node->next = *head;

	*head = new_node;


	return (new_node);
}



/**
 * _strlen - returns the length of a string.
 * @s: string to get the length of.
 * Return: integer the length of the string
 */

int _strlen(const char *s)
{
	int cnt;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	;
	return (cnt);
}

