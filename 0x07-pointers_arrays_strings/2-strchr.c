#include "main.h"
#include <stddef.h>

/**
 * *_strchr - it locate a character in the string
 * @s: input parameter
 * @c: input value
 * Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
		if (*s == c)
			return (s);
		return (NULL);
}
