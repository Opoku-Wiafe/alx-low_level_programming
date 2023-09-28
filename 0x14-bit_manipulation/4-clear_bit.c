#include "main.h"
/**
 * clear_bit - func that sets the value of a bit to 0 at a given index.
 * @n: the number of bits passed and checked
 * @index: index of the numbers to be passed.
 * Return: return bit if successful or -1 when error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	clear = ~(1UL << index);
	*n = *n & clear;
	return (1);
}
