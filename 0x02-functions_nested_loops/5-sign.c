#include "main.h"
/**
 * print_sign - This function produce + - or 0 when characters aew inserted.
 *
 * @n: This parameter determines if a sign is above 0, below 0 or equal to 0.
 *
 * Return: 1 if is above 0, 0 when is equal 0 and -1 when is below;
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
