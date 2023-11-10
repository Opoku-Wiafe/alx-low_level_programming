#include "lists.h"

/**
 * sum_dlistint - function thar sum of all the data (n) in it
 * @head: head of doubly linked list
 * Return: the sum that data
 */

int sum_dlistint(dlistint_t *head)
{
	int count, results = 0;

	for (count = 0; head; count++)
	{
		results += head->n;
		head = head->next;
	}
	return (results);
}
