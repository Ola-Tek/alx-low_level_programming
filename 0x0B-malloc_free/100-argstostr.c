#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all program arguments
 * @ac: first input
 * @av: second input
 * Return: a pointer
 */
char *argstostr(int ac, char **av)
{
	char* aout;
	int i, n, k = 0; 
	int len = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av [i][n]; n++)
			len++;
	}
	len += ac;

	aout = malloc(sizeof(char) * len + 1);
	if (aout == NULL)
		return NULL;

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			aout[k] = av[i][n];
			k++;
		}
		if (aout[k] == '\0')
		{
			aout[k++] = '\n';
		}
	}
	return (aout);
}
