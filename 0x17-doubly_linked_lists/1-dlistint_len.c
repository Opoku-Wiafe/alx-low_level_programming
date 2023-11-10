#include "lists.h"

/**
 * dlistint_len -  funct prints all the elements of a dlistint_t list
 * @h: head of doubly list
 * Return: the number of elements int list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count_node;

	for (i = 0; current; i++)
	{
		current = current->next;
	}
	return (count_node);
}
