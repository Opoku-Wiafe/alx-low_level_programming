#include "main.h"
/**
 * puts_half - print have of the char provided
 * @str: convert text to readable
 * Return: null
 */

void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	str -= (i / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
