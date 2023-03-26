#include "main.h"
#include <unistd.h>
/**
 * print_numbers - This is the main function of the code
 *
 * Return: return i.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
