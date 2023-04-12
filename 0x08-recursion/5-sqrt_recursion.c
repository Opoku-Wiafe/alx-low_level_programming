#include "main.h"
/**
 * square_root - Supporting function.
 * @n: the 1 parameter
 * @i: Second parameter
 * Return: -1 true else square_root
 */

int square_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (square_root(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - Check for sqrts
 * @n: parameter for checking
 * Return: return -1 if false 0 if true.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (square_root(n, 2));
}
