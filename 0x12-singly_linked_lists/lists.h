#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - struct of a singly linked list
 * @str: string dynamically allocated
 * @len: string length
 * @next: pointer to the next node
 */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
