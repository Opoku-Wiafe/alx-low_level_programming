#include "main.h"
/**
 * reverse_array - reverse array
 * @a: the array 
 * @n: index of the array to swap
 * Return: Null
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++
	}
	printf("\n");
}
