#include "main.h"
/**
 * _strdup - array allocated to the strings
 * @str: string in question
 * Return: the pointer to the string
 */
char *_strdup(char *str)
{
	char *up;
	int len;
	int i;

	i = 0;
	len = 0;
	if (!str)
		return (NULL);
	while (str[len])
		len++;
	up = malloc(len * sizeof(char) + 1);
	if (!up)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		up[i] = str[i];
		i++;
	}
	up[i] = '\0';
	return (up);
}
