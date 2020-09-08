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

	i = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (i);
}
