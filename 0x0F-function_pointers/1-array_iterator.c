#include "function_pointers.h"
/**
 * array_iterator - prints each array elem on a newl
 * @array: array check func.
 * @size: how many characters to print
 * @action: pointer to print in regular or hexadecimals
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array == NULL || action == NULL)
		return;


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
