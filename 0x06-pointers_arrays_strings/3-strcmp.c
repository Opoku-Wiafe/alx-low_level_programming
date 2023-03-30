#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: 1 placehold
 * @s2: 2 placehold
 * Return: return s1 and s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
