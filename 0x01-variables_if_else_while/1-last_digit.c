#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *  main - This code displays the last digits of a number.
 *
 *  Return: always 0.
 */
int main(void)
{
	int n;
	int new;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is ", n);
	new = n % 10;
	if (new > 5)
	{
		printf("%d and is greater than 5\n", new);
	}
	else if (new == 0)
	{
		printf("%d and is 0\n", new);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", new);
	}
	return (0);
}
