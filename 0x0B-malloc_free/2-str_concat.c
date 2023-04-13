#include "main.h"
/**
 * str_concat - concatenate string1 with string2
 * @s1: the first string convert
 * @s2: the second string convert
 * Return: the pointer to the string result
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	char *sum;

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
	sum = malloc(i + j + 1);
	if (!sum)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[j] != '\0')
	{
		sum[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		sum[i] = s2[j];
		i++;
		j++;
	}
	sum[i] = '\0';
	return (sum);
}
