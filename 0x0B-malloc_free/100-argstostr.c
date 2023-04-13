#include "main.h"
/**
 * argstostr - concatenates all the arguments passed to the command
 * @ac: arguments number passed
 * @av: arguments in questions
 * Return: 0. if is true
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, t;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
			i++;
		i++;
	}
	i++;
	str = malloc(i * sizeof(char));
	if (!str)
		return (NULL);
	t = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			str[t++] = av[j][k];
		}
		str[t++] = '\n';
	}
	str[t] = '\0';
	return (str);
}
