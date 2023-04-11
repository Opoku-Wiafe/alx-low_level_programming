#include "main.h"

/**
 * main - program displays multiplication of two numbers
 * @argc: numbre of args
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
