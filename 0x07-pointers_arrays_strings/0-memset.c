#include "main.h"
/**
 * _memset - function that fills n bytes of the memory area pointed to by s with the constant byte b
 * @s: first input value
 * @b: second input value
 * @n: prameter n
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
