#include "main.h"
/**
 * set_bit - set the bit of a number to 1
 * @n: inputed integer
 * @index: given index or position
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
