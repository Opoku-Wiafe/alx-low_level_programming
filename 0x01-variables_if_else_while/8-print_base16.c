#include <stdio.h>
/**
 * main - Numbers in base 16.
 * Return: always 0.
 */
int main(void)
{
	int i = 0;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
