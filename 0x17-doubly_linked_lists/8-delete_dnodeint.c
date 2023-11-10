#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index
 * @head: pointer to the head of the double linked list
 * @index: index of the node to be deleted
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *old, *del;

	if (!head || !*head)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	unsigned int i;

	for (i = 0; temp != NULL; i++, temp = temp->next)
	{
		if (i == index)
			del = temp;

		if (i == index - 1)
			old = temp;

		if (i == index + 1)
		{
			old->next = temp;
			if (temp)
				temp->prev = old;
			free(del);
			return (1);
		}

		if (temp->next == NULL && i == index)
		{
			old->next = NULL;
			free(temp);
			return (1);
		}
	}

	return (-1);
}
