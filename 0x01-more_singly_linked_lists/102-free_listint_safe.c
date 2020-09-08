#include "lists.h"

/**
 * floyds_cycle2 - checks for infinite loops.
 * @head: Linked list.
 * Return: Loop length.
 */
size_t floyds_cycle2(const listint_t *head)
{
	const listint_t *slow_p, *fast_p;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow_p = head->next;
	fast_p = (head->next)->next;
	while (fast_p)
	{
		if (slow_p == fast_p)
		{
			slow_p = head;
			for (; slow_p != fast_p; nodes++)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			slow_p = slow_p->next;
			for (; slow_p != fast_p; nodes++)
				slow_p = slow_p->next;
			return (nodes);
		}
		slow_p = slow_p->next;
		fast_p = (fast_p->next)->next;
	}

	return (0);
}
/**
 * free_listint_safe - Free linked list.
 * @h: Linked list.
 * Return: Number of nodes in list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *aux;
	size_t nodes = floyds_cycle2(*h), id;

	if (nodes == 0)
	{
		for (nodes = 0; h && *h; nodes++)
		{
			aux = (*h)->next;
			free(*h);
			*h = aux;
		}
		h = NULL;
		return (nodes);
	}
	for (id = 0; id < nodes; id++)
	{
		aux = (*h)->next;
		free(*h);
		*h = aux;
	}
	*h = NULL;
	h = NULL;
	return (nodes);
}
