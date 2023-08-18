#include "variadic_functions.h"
/**
 * sum_them_all - Function that finds the sum of all its parameter.
 *
 * @n: constant value
 * Return: sum for Successful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
