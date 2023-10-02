#include "main.h"
/**
 * *_memcpy - function that copies a character to another
 * @dest: input value
 * @src: input value
 * @n: parameter n
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
