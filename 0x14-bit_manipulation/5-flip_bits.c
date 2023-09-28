#include "main.h"
/**
 * flip_bits - no. of bits needed to flip to get from one number to another.
 * @n: the number of bits passed and checked
 * @m: index of the numbers to be passed.
 * Return: return bit if successful.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
