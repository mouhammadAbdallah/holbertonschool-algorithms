#include "lists.h"

/**
 * pop_listint - pop_listint
 * @head: head
 *
 * Return: data deleted int
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp = *head;

	if (tmp == NULL)
		return (0);
	i = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (i);
}
