#include "main.h"

/**
 * print_last_digit - print the last digit of a numberor set of numerical characters
 * @n: The number to be treated
 * Return: value of the last digit of a number
 */

int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 10)
{
last = last * -1;
_putchar(last + '0');
}
return (last);
}
