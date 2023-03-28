#include "main.h"
/**
 * _strcpy - copy pointer
 * @dest: first variable
 * @src: second v.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
			len++;
	}
	*(dest + len) = '\0';
return (dest);
}
