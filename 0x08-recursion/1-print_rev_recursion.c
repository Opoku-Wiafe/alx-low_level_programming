#include "main.h"
/**
 * _print_rev_recursion - Print String in reverse order
 * @s: convert char (character) to string.
 * Return: Null or empty.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
