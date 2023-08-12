#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		p[i] = min + i;

	return (p);
}
