#include "main.h"
/**
 * _pow_recursion - returns the result raised to a power
 * @x: inputed value
 * @y: the power of the inputed value
 * Return: the result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
