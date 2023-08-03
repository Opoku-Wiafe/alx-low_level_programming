#include "main.h"
/**
 * _pow_recursion - Function x raise to the power y x^y
 * @x: first parameter
 * @y: Second Parameter
 * Return: return -1 when lower 1 when highier
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
