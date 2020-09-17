#include "hash_tables.h"

/**
 * hash_table_set - add new node
 * @ht: hash_table_t
 * @key: str
 * @value: str
 *
 * Return: 1 when success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = (ht->array)[index];
	(ht->array)[index] = node;
	return (1);
}
