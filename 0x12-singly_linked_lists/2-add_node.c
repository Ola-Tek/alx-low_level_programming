#include "lists.h"
int len(const char *str);

/**
 * add_node - bringing in a new node
 * @str: string pointer
 * @head: head of the node
 * Return: head of the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return ('\0');
	
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return ('\0');

	if (*head == NULL)
		new_node->next = NULL;

	else
	{
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	}
	return (*head);
}
/**
 * len - length of len
 * @str: string pointer
 * Return: length of string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
