#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: string to contain the list.
 * Return: address of the head in the beginning of the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	new_node->str = strdup(str);
	while (str[i])
	{
		i++;
	}
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
