#include "lists.h"

/**
 * print_dlistint - prints all the lists
 * @h: the head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
