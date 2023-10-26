#include <stdio.h>
/**
 * _putchar - printing a character
 * @c: character input
 *
 * Return: 1 on success, 0 when its not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
