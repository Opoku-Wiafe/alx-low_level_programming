#include "variadic_functions.h"
/**
 * print_numbers - Function that prints number followed by separator.
 *
 * @separator: separates strings from each other
 * @n: constant value
 * Return: sum for Successful
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		i++;
		printf("%d", va_arg(args, int));
	}
	if (separaator != NULL && i != n - 1)
	{
		printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
