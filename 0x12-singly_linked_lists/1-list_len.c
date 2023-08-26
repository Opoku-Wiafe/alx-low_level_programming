#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list that is being counted
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
