#include "main.h"
/**
 * get_endianness - func. that checks the endianness
 * Return: return nothing since is void.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *_endian;
		_endian = (char *)&i;
	return ((int)*_endian);
}
