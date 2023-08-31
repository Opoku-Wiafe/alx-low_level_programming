#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head : pointer to the head of the list
 * @idx  : index of the list where new is added
 * @n    : new node to be added
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *used_node = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = used_node;
		*head = new_node;
			return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (used_node == NULL || used_node->next == NULL)
			return (NULL);

		used_node = used_node->next;
	}

	new_node->next = used_node->next;
	used_node->next = new_node;

	return (new_node);
}
