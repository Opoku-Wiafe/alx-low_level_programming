#include <stdio.h>
/**
 * main - Display alphabeths both in small and uppercases.
 *
 * Return: alway 0.
 */
int main(void)
{	char c;

	/* First set of alphabeths lowercases.*/
	for (c = 'a'; c <= 'z'; c++)
	{	putchar(c);
	}
	/* second set of alphabeths ppercases */
	for (c = 'A'; c <= 'Z'; c++)
	{	putchar(c);
	}
	putchar('\n');
	return (0);
}
