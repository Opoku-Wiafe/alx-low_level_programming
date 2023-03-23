#include <stdio.h>
/**
 * main - The main code that checks the multiple of 3 and 5.
 *
 * Return: always return 0.
 */

int main(void)
{
	int i;
	int j;
	j = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j = j + i;
		}
	}
	printf("%d\n", j);
	return (0);
}
