#include "hash_tables.h"

/**
 * hash_table_get - hash_table_get
 * @ht: hash_table_t
 * @key: str
 *
 * Return: str
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *list;

	index = key_index((unsigned char *)key, ht->size);
	list = (ht->array)[index];
	while (list != NULL)
		if (!strcmp(list->key, key))
			break;
	list = list->next;
	if (list == NULL)
		return (NULL);
	return (list->value);
}
