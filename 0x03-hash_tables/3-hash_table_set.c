#include "hash_tables.h"
#include <string.h>

/**
 * add_nodeint - add new node
 * @head: list
 * @key: str
 * @value: str
 *
 * Return: hash_node_t
 */
hash_node_t *add_nodeint(hash_node_t **head,
			 const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

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
	hash_node_t *tmp = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	if (add_nodeint(&(ht->array[index]), key, value) == NULL)
		return (0);
	return (1);
}
