#include "main.h"
/**
 * _strncpy - copys a string
 * @dest: Destination parameter.
 * @src: source para.
 * @n: the index.
 * Return: returns dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, lsrc = 0;

	while (src[i++])
		lsrc++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = lsrc; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
