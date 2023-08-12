#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of byte to be allocated
 *
 * Return: return pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
