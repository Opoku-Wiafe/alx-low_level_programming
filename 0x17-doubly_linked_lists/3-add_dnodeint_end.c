#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: head of doubly linked list
 * @n: new node added
 * Return: address of the new element added, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	if (!head)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	if (*head)
	{
		while (temp && temp->next)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
	}
	else
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	return (newNode);
}
