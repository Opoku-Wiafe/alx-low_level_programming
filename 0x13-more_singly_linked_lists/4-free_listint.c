#include "lists.h"

/**
 * free_listint - funtion that frees a linked list
 * @head: head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
