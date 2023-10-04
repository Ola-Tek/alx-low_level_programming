#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a newly allocated space
 * @str: string input
 * 
 * Return: pointer to the character string
 */
char *_strdup(char *str)
{
	size_t i, z;
	char *strdown;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strdown = (char *)malloc(sizeof(char) * (i + 1));

	if (strdown == NULL)
	{
		return (NULL);
	}

	for (z = 0; z <= i; z++)
	{
		strdown[z] = str[z];
	}
		return (strdown);
}
