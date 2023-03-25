#include "main.h"
/**
 * _isupper - is the function the main entry to the code
 *
 * @c: this is the parameter to check if its upper or lower.
 *
 * Return: 1 if upper case and 0 if lowercase.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
