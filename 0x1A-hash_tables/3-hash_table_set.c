#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key in tge hash table
 * @value: hash value of the hash table
 * Return: 1, if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *temp;
	char *n_value;

	if (ht == NULL ||
	ht->array == NULL ||
	ht->size == 0 ||
	key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			n_value = strdup(value);
			if (n_value == NULL)
				return (0);
			free(temp->value);
			temp->value = n_value;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = create_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}

/**
 * create_hash_node - create a new hash node
 * @key: key of the hash table
 * @value: hash value of ht
 * Return: the new node on success, NULL on failure
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
