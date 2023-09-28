#include "main.h"
/**
 * flip_bits - no. of bits needed to flip to get from one number to another.
 * @n: the number of bits passed and checked
 * @m: index of the numbers to be passed.
 * Return: return bit if successful.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int used;
	unsigned long int xclu_or = n ^ m;
	unsigned int i = 0;

	while (xclu_or)
	{
		i++;
		used = (xclu_or - 1);
		xclu_or = xclu_or & used;
	}
	return (i);
}
