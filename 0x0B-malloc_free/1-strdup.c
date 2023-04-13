#include "main.h"
/**
 * _strdup - allocate the strings
 * @str: string in question
 * Return: the pointer to the string
 */
char *_strdup(char *str)
{
	char *ds;
	int len;
	int i;

	i = 0;
	len = 0;
	if (!str)
		return (NULL);
	while (str[len])
		len++;
	ds = malloc(len * sizeof(char) + 1);
	if (!ds)
		return (NULL);
	while (str[i] != '\0')
	{
		ds[i] = str[i];
		i++;
	}
	ds[i] = '\0';
	return (ds);
}
