#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list.
 * @head: head of the list
 *
 * Return: head Node's data
 */
int pop_listint(listint_t **head)
{
	int stored_value;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	stored_value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (stored_value);
}
