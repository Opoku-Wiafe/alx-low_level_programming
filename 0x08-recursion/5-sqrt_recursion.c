#include "main.h"
/**
 * _helper - Supporting function.
 * @n1: the 1 parameter
 * @pSqrt: Second parameter
 * Return: -1 true else _helper
 */

int _helper(int n1, int pSqrt)
{
	if ((pSqrt * pSqrt) == n1)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt pSqrt) > n1)
			return (-1);
		else
			return (_helper(n1, pSqrt + 1));
	}
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
	else
		return (_helper(n, 0));
}
