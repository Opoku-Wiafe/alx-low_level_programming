#include "lists.h"
/**
 * print_dlistint - Function that prints all elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: the nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count_node;

	for (count_node = 0; current; count_node++)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
	return (count_node);
}
