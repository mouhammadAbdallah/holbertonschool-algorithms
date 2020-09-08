#include "lists.h"

/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: head
 * @idx: index
 * @n: data
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *tmp = *head;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	if (tmp == NULL)
	{
		if (idx == 0)
		{

			node->n = n;
			node->next = NULL;
			tmp = node;
			return (node);
		}
		else
		{
			free(node);
			return (NULL);
		}
	}

	for (i = 0; i < idx && tmp != NULL; i++)
		tmp = tmp->next;
	if (i != idx)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
