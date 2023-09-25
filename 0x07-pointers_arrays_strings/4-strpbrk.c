#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any set bytes
 * @s: input value
 * @accept: input value
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
