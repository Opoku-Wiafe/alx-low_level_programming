#include "main.h"
/**
 * create_array - function to create the array
 *
 * @size: Size of the array.
 * @c: Number of characters in the Array
 * Return: return array when greater or less than 0, Null when 0.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	x = 0;
	if (size == 0)
		return (NULL);
	array = malloc(size);
	if (!array)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	array[x] = '\0';
	return (0);
}
