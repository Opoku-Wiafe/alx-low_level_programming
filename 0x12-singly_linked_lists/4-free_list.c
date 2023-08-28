#include "lists.h"

/**
 * free_list - function that frees list_t.
 * @head: head of the linked list to be freed.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *used;

	while ((used = head) != NULL)
	{
		head = head->next;
		free(used->str);
		free(used);
	}
}
