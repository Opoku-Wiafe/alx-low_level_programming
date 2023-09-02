#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: length of the string to converted
 * Return: return 0 if NULL or empty or the actual value if correct.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = (i << 1) + (*b - '0');
	}
	return (i);
}
