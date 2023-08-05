#include "main.h"

/**
 * main - program displays args one per line
 * @argc: numbre of  args
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
