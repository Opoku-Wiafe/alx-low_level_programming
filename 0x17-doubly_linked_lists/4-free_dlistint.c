#include "lists.h"

/**
 * free_dlistint -  function thar frees a dlistint_t
 * @head: head of doubly linked list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *first, *second;

	first = head;
	while (first)
	{
		second = first->next;
		free(first);
		first = second;
	}
}
