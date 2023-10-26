#include "main.h"
/**
 * flip_bits - the number of bits you would need to flip to get from one number
 * @n: inputed integer
 * @m: second inputed integer
 * Return: the number of bits you would flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
