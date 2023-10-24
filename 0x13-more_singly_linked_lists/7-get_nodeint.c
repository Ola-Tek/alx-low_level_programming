#include "lists.h"
/**
 * get_nodeint_at_index - get node at a particular index
 * @head: head node
 * @index: nth node
 * Return: address of head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;

	for (b = 0; b < index; b++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
