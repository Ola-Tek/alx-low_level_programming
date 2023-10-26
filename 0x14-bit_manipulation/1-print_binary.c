#include "main.h"
/**
 * print_bi - print bunary representation of no
 * @n: integer in decimal input
 *
 * Return: void
 */
void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 1)
		_putchar('0');
}
/**
 * print_binary - print out binary
 * @n: integer input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi(n);
	}
}
