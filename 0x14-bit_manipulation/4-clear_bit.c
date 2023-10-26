#include "main.h"
/**
 * clear_bit - a function that set the value of a bit to zero
 * @n: inputed integer
 * @index: at a given index
 * Return: 1 on sucess
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8 || n == NULL)
		return (-1);
	mask = 1;
	mask = mask << index;
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;
	return (1);
}
