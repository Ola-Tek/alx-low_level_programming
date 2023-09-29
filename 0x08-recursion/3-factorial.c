#include "main.h"
/**
 * factorial - multiple decreasing factors
 * @n: inputed integer or digit
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
