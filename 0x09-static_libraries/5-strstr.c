#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a character in a string
 * @haystack: input value
 * @needle: input value
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	const char *h = haystack;
	const char *n = needle;

	while (*needle != '\0')
	{
	
		while (*h != '\0')
		{
			if (*n == *h)
			return (0);
			h++;
		}
		n++;
	}
	return (NULL);
}
