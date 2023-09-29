#include "main.h"
/**
 * prime_a - prime factor
 * @a: inout value
 * @b: input value
 * Return: 0 or 1
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - detect prime numbers
 * @n: the input number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
