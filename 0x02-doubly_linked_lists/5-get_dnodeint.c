#include "lists.h"

/**
 * get_dnodeint_at_index - get_dnodeint_at_index
 * @head: head
 * @index: int
 *
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->next != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return (NULL);
}
