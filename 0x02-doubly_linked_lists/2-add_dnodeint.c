#include "lists.h"

/**
 * add_dnodeint - add_dnodeint
 * @head: head
 * @n: number
 *
 * Return: the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = node;
	*head = node;
	return (node);
}
