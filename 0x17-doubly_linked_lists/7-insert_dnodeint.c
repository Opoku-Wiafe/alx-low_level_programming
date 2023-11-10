#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning
 * @head: head of double list
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: head of doubly linked list
 * @n: new node added
 * Return: address of the new element added, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/**
 * insert_dnodeint_at_index -  function that inserts a new element
 * @h: head of doubly linked list
 * @idx: address of the element to be added
 * @n: value to the element
 * Return: address of the newly added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *first, *newNode, *ins_front;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	first = *h;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (first)
	{
		if (i == idx - 1)
			ins_front = first;

		if (i == idx)
		{
			newNode->next = first;
			first->prev = newNode;
			ins_front->next = newNode;
			newNode->prev = ins_front;
			return (newNode);
		}
		if (!first->next && i + 1 == idx)
			return (add_dnodeint_end(h, n));
		first = first->next;
		i++;
	}
	return (NULL);
}
