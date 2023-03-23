#include "main.h"
/**
 *
 * positive_or_negative - compare if a number is positive or negative
 *
 * @i: is the main parameter that checks the numbers
 * Return: returns i.
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is a negative number\n", i);
	else
		printf("%d is a positve number\n", i);
}
