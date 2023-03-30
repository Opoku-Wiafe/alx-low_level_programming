#include "main.h"
/**
 * reverse_array - reverse array
 * @a: the array
 * @n: index of the array to swap
 * Return: Null
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
