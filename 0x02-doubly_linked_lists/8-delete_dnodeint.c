#include "lists.h"

/**
 * delete_dnodeint_at_index - delete_dnodeint_at_index
 * @head: head
 * @index: index
 *
 * Return: 1 if success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int id;
	dlistint_t *current = *head, *del;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	else
		for (id = 0; current != NULL; id++)
		{
			if (id == index - 1)
			{
				del = current;
				del = del->next;
				current->next = del->next;
				(del->next)->prev = current->next;
				free(del);
				return (1);
			}
			current = current->next;
		}
	return (-1);
}
