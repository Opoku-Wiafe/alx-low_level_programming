#include "main.h"

unsigned long int check_number(unsigned int b, unsigned int p);
/**
 * print_binary - function that prints binary numbers
 * @n: The number to be converted.
 * Return: return Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int pass;
	char terminate;

	terminate = 0;
	i = check_number(2, sizeof(unsigned long int) * 8 - 1);
	while (i != 0)
	{
		pass = n & i;
		if (pass == i)
		{
			terminate = 1;
			_putchar('1');
		}
		else if (terminate == 1 || i == 1)
		{
			_putchar('0');
		}
		i >>= 1;
	}
}

/**
 * check_number - determines number bases and ^power
 * @b: base of the number
 * @p: power of the number
 *
 * Return:  number bases or power
 */
unsigned long int check_number(unsigned int b, unsigned int p)
{
	unsigned long int j = 1;
	unsigned int i = 1;

	for (; i <= p; i++)
		j *= b;
	return (j);
}
