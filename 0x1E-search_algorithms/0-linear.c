#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints using linear algo.
 * @array: Data to be checked
 * @size: the size of the data to check
 * @value: keyed data from user
 *
 * Return: Return
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
