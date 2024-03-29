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

	for (count_node = 0; current; count_node++)
	{
		current = current->next;
	}
	return (count_node);
}
