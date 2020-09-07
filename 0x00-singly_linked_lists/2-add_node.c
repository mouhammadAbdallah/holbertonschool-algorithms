#include "lists.h"

/**
 * add_node - add_node
 * @head: head
 * @str: str
 *
 * Return: the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	char *s;
	list_t *node;

	for (len = 0; str[len]; len++)
		;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = s;
	node->len = len;
	node->next = *head;
	*head = node;
	return (node);
}
