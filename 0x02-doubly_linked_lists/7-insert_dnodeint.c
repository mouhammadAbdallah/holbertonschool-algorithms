#include "lists.h"

/**
 * insert_dnodeint_at_index - insert_dnodeint_at_index
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int id;
	dlistint_t *current = *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	current = *h;
	if (*h == NULL && idx > 0)
		return (free(new), NULL);
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	for (id = 0; id < idx - 1; id++)
	{
		current = current->next;
		if (current == NULL && idx - id > 0)
			return (free(new), NULL);
	}
	new->next = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
