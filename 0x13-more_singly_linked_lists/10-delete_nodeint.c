#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head : pointer to the head of the list
 * @index  : index of the list where is to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node;
	listint_t *used_node = *head;
	unsigned int i;

	if (used_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(used_node);
			return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (used_node->next == NULL)
			return (-1);

		used_node = used_node->next;
	}

	old_node = used_node->next;
	used_node->next = old_node->next;
	free(old_node);
		return (1);
}
