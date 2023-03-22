#include "main.h"
/**
 * print_alphabet_x10 - This function displays the alphabet 10 times.
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 25; j++)
		{
			_putchar(j + 'a');
		}
		_putchar('\n');
	}
}
