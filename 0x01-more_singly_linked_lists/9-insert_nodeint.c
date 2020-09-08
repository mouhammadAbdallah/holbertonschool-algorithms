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
	unsigned int id;
	listint_t *current = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	current = *head;
	if (*head == NULL && idx > 0) /* Validate Empty list */
		return (free(new), NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
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
	return (new);
}
