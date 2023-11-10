#include "lists.h"

/**
 * get_dnodeint_at_index - function that Get node at index
 * @head: head of doubly linked list
 * @index: index of the node
 * Return: return the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count;

	for (count = 0; current; count++)
	{
		if (count == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
