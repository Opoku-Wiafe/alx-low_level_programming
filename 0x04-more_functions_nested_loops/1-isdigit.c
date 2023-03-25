#include "main.h"
/**
 * _isdigit - this is the main function of the code
 *
 * @c: This parameter check if number is within rage.
 *
 * Return: returns 1 if its a digit and 0 if its not;
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);
}
