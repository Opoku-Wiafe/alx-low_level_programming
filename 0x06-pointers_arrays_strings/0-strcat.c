#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: first parameter
 * @src: second parameter of the program.
 * Return: returns dest.
 */

char *_strcat(char *dest, char *src)
{
	int lens = 0;
	int lend = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		lend++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		lens++;
	}
	for (i = 0; i <= lens; i++)
	{
		dest[lend] = src[i];
	}
	/*_putchar('\n');*/
	return (dest);
}
