#include "main.h"
/**
 * _puts_recursion - Displays Strings from character.
 * @s: Char been parsed
 * Return: Null or empty.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
