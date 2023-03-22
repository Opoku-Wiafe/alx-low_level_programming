#include "main.h"
/**
 * _islower - Print lowercase alphabets
 *
 * @c: The c parameter determines if is lower or upper.
 *
 * Return: if lower return 1 else return 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
