#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 * Return: always 0;
 */
int main(void)
{
	int i = 0;

	do {
		putchar(i + '0');
		i = i + 1;
	} while
	(i < 10);
	putchar('\n');
	return (0);
}
