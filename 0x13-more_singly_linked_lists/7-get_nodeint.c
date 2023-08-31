#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: head of the list
 * @index: is the index of the node.
 * Return: returns the nth node or NULL if fail
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; (i < index) && (head->next); i++)
	head = head->next;

	if (i < index)
	{
		return (NULL);
	}
	return (head);

}
