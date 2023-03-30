#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: first parameter
 * @src: second parameter of the program.
 * @n: the index of array.
 * Return: returns dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int lend = 0;
	int i = 0;

	while (dest[i++])
		lend++;
	for (i = 0; src[i] && i < n; i++)
		dest[lend++] = src[i];
	return (dest);
}
