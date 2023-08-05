#include "main.h"

/**
 * main - program displays addition of commandline arguments
 * @ac: numbre of args
 * @av: arguments passed
 * Return: 0
 */

int main(int ac, char **av)
{
	int i, j, sum;

	i = 1;
	sum = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		sum += atoi(av[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
