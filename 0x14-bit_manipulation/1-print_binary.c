#include "main.h"
/**
 * print_binary - function that prints binary numbers
 * @n: The number to be converted.
 * Return: return Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	while (i <= n / 2)
	{
		i *= 2;
	}
	while (i > 0)
	{
		if (n >= i)
		{
			_putchar('1');
			n -= i;
		}
		else
		{
			_putchar('0');
		}
		i /= 2;
	}

}
