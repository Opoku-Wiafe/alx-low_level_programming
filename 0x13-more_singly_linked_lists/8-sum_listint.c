#include "lists.h"
/**
 * sum_listint - the sum of all the data (n) of a linked list.
 * @head: head of the list
 *
 * Return: returns the sum of all the data (n) or 0 when empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
