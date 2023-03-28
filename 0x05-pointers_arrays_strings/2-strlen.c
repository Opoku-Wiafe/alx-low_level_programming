#include "main.h"
/**
 * _strlen - return the length of a string
 *
 * @s: the pointer to the char s
 * Return: the value of lengt.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;

	}
	return (len);

}
