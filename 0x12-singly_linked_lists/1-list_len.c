#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: pointer of the head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
