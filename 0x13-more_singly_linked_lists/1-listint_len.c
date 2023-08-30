#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head of the linked list to be printed.
 * Return: the number of element in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);

}
