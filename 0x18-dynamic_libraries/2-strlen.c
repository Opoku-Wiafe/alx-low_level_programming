#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string of the pointer
 * Return: length of pointer
 */
int _strlen(char *s)
{
	int i = 0;


	while (*s != '\0')
	{
		i++;
		s++;
	}


	return (i);
}
