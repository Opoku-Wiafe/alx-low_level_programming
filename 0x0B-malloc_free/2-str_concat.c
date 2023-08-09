#include "main.h"
/**
 * str_concat - concatenate string1 with string2
 * @s1: the first string converted
 * @s2: the second string converted
 * Return: the pointer to the string result
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	char *join;

	i = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	join = malloc(i + j + 1);
	if (!join)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[j] != '\0')
	{
		join[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}
