#include "main.h"
/**
 * print_alphabet - print_alphabet Function displays alphabets.
 * Return: always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 25; ++i)
	{
		_putchar(i + 'a');
	}
	_putchar('\n');
}
