#include "lists.h"

/**
 * add_dnodeint_end - add_dnodeint_end
 * @head: head
 * @n: int
 *
 * Return: the new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tail;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head != NULL)
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = node;
		node->prev = tail;
	}
	else
		*head = node;
	return (*head);
}
