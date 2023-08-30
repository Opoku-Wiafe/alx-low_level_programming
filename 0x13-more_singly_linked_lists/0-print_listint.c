#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head of the linked list to be printed.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t check_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		check_node++;
		h = h->next;
	}
	return (check_node);
}
