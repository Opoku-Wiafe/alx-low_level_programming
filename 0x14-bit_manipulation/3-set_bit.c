#include "main.h"
/**
 * set_bit - func sets the value of a bit to 1 at a given index.
 * @n: the number of bits passed and checked
 * @index: index of the numbers to be passed.
 * Return: return bit if successful or -1 when error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int new;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	new = 1UL << index;
	*n = *n | new;
	return (1);
}
