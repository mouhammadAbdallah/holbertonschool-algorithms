#include "lists.h"

/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: head
 * @index: index
 *
 * Return: new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int id;
	listint_t *current = *head, *del;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
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
				free(del);
				return (1);
			}
			current = current->next;
		}
	return (-1);
}
