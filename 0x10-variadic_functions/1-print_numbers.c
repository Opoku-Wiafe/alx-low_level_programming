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
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(args, int));

		if (separator != NULL && i != (n - 1))

			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
