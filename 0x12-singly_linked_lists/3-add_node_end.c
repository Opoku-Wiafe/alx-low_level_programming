#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: string to contain the list.
 * Return: address of the head in the beginning of the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *used_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = NULL;
	used_node = *head;

	if (used_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (used_node->next != NULL)
			used_node = used_node->next;
		used_node->next = new_node;
	}
	return (*head);
}
