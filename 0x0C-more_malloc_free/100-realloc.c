#include "main.h"
#include <stdlib.h>
/**
 * _realloc - to reallocate memory space
 * @ptr: pointer
 * @old_size: input data
 * @new_size: input data
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t i, max = new_size;
	char *old_p = ptr;

	if (ptr == NULL)
	{
	p = malloc(new_size);
		return (p);
	}
		else if (new_size == 0)
		{
		free(ptr);
		return (NULL);
		}
		else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = old_p[i];
	free(ptr);
	return (p);
}
