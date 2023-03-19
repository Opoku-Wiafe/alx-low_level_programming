#include <stdio.h>
/**
 * main - A program that displays Alphabets A to Z.
 *
 * Return: always 0.
 */
int main(void)
{	char a;

	/*for loop is needed here */
	for (a = 'a'; a <= 'z'; a++)
	{	putchar(a);
	}
	putchar('\n');
	return (0);
}
