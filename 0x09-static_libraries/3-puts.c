#include "main.h"
/**
 * _puts - displays string
 * @str: Char to be converted.
 *
 * Return: returns null text
 */

void _puts(char *str)
{
	/*int len = 0;*/

	while (*str != '\0')
	{
		/*len++;*/
		_putchar(*str++);
	}
	_putchar('\n');
}
