#include "lists.h"

/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: head
 * @index: int
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
