#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: convert char to string
 * Return: Null or empty.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
