#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - this function prints natural numbers to 98
 *
 * @n: this parameter checks the numbers
 * Return: return n.
 */

void print_to_98(int n)
{
	int a;

	if (n >= 0 && n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a == 98)
				printf("%d", a);
			else
			printf("%d, ", a);
		}
		putchar('\n');
	}
	else if (n < 0)
	{
		for (a = n; a <= 98; a++)
		{
			if (a == 98)
				printf("%d", a);
			else
			printf("%d, ", a);
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a == 98)
				printf("%d", a);
			else
			printf("%d, ", a);
		}
		putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
}
