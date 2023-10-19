#include "lists.h"
/**
 * print_list - print all elements in a singly linked list
 * @h: head of the linked list
 * Return: total number of nodes
 */
size_t print_list(const list_t *h)
{
	int i; /*for iteration and to count*/

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		printf("[%lu] %s\n", h->len, "(nil)"); /*u represent string len*/
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%lu] %s\n", h->len, "(nil)");
	return (i);
}
