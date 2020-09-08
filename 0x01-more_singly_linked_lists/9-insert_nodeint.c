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
	listint_t *node, *tmp1, *tmp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	i = 0;
	while (i < idx && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != idx)
	{
		free(node);
		return (NULL);
	}
	tmp1 = tmp;
	tmp = node;
	tmp->next = tmp1;
	return (node);
}
