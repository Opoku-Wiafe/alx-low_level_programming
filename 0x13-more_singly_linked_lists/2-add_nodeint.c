#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: head of the linked list.
 * @n: nodes of the linked list
 * Return: the address of new node or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
