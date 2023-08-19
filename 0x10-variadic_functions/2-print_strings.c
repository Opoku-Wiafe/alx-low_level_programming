#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: separates strings
 * @n: The number of strings passed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;
	unsigned int i;
	char *txt;

	va_start(strg, n);
	for (i = 0; i < n; i++)
	{
		txt = va_arg(strg, char *);
	if (txt == NULL)
		printf("(nil)");
	else
		printf("%s", txt);
	if (separator == NULL && i != (n - 1))
		printf("%s", separator);
	}
	printf("\n");

	va_end(strg);
}

