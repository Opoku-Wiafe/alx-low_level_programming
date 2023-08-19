#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *strg, *separator = "";
	va_list any;

	va_start(any, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(any, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(any, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(any, double));
					break;
				case 's':
					strg = va_arg(any, char *);
					if (!strg)
						strg = "(nil)";
					printf("%s%s", separator, strg);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(any);
}
