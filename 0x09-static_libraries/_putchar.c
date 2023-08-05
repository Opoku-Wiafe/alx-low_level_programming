#include <unistd.h>

/**
 * _putchar - writes the character in c
 * @c: The character to be displayed
 *
 * Return: return 1. if successful, -1 if error.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

