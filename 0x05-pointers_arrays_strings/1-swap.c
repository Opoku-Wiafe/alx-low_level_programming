#include "main.h"
/**
 * swap_int - this function swaps it values
 *
 * @a: first integer
 * @b: Second integer
 *
 * Return: Null or empty.
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
