#include "lists.h"
/**
 * free_listint2 - function that free the pointer of a linked list
 * @head : pointer to list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
	}
	head = NULL;
}
