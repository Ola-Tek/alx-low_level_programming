#include "main.h"
/**
 * _print_rev_recursion - printing a string in revers
 * @s: inputed string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
