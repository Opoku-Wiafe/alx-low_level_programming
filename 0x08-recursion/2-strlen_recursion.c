#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: Parameter to be passed
 * Return: return the result.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
