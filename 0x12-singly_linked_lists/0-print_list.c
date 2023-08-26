#include "lists.h"
/**
 * print_list - Struct function that prints linked List
 * @h: the items that is linked to the head iterating
 *
 * Return: returns node counter (temp)
 */
size_t print_list(const list_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		temp++;
	}
	return (temp);
}
