#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number of bits to be passed
 * @index: index of the numbers to be passed.
 * Return: return bit if successful or -1 when error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
