#include "lists.h"

/**
 * add_node_end - add_node_end
 * @head: head
 * @str: str
 *
 * Return: the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	char *s;
	list_t *node;
	list_t *tail;

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
	node->next = NULL;
	if (*head != NULL)
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = node;
	}
	else
		*head = node;
	return (*head);
}
