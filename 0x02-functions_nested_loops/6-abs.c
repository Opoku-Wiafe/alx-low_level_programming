#include "main.h"
/**
 * _abs - This function accepts numbers and converts it into absolute values
 *
 * @c: The parameter takes integers both positive and negative
 *
 * Return: the function will return an integer.
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = -(c);
	}
	else if (c >= 0)
	{
		c = c;
	}
	return (c);
}
