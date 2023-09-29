#include "main.h"
#include <math.h>

/**
 * sqrt_n - return natural square root
 * @n: input value
 * @c: inpit value
 * Return: square root or -1
 */
int sqrt_n(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c > n)
	{
		return (-1);
	}
	return (sqrt_n(n, c + 1));
}

/**
 * _sqrt_recursion - perfect square
 * @n: input value
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_n(n, 0));
}
