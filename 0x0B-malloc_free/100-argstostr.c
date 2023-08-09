#include "main.h"
/**
 * argstostr - concatenates all the arguments passed to the command
 * @ac: arguments number passed
 * @av: arguments in questions
 * Return: str if is true
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, x, y;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][x] != '\0'; x++)
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
			for (x = 0; av[j][x] != '\0'; x++)
			{
				str[t++] = av[j][x];
			}
			str[y++] = '\n';
		}
	str[y] = '\0';
	return (str);
}
