#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc function
 * @b: number of bytes
 *
 * Return: a pointer to the  memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
