#include "main.h"
/**
 * main - program displays program name
 * @argc: numbre of  args
 * @argv: arguments
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	(void)argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
