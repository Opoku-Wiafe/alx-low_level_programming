#include "main.h"
/**
 * check_if_has_multipliers - look for multipliers of n value
 * @n: number in question entered
 * @i: index of the array
 * Return: 1 if n is prime, 0 if not prime
 */
int check_if_has_multipliers(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (check_if_has_multipliers(n, i + 1));
}
/**
 * is_prime_number - check if n is prime or not
 * @n: number in question
 *
 * Return: 1 if n is prime, 0 if is not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_if_has_multipliers(n, 2));
}
