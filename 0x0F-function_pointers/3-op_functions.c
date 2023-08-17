#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Add two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Calculate the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Calculate the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: multiples.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of division two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
