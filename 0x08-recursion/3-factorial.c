#include "main.h"
/**
 * factorial - Calculates the factors
 * @n: n is the given number
 * Return: return the results
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
