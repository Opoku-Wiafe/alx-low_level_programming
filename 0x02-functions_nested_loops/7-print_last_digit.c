#include "main.h"
/**
 * print_last_digit - This function print thte last number of a give sequence.
 *
 * @j: This parameter calculates for the last number of a value.
 *
 * Return: Function will return a
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (j < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
		return (i);
}
