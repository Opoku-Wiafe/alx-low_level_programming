#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning
 * @head: head of double list
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (*head)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	else
		newNode->next = NULL;
	newNode->prev = NULL;
	*head = newNode;
	return (newNode);
}
