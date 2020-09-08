#include "lists.h"

/**
 * add_nodeint_end - add_nodeint_end
 * @head: head
 * @n: int
 *
 * Return: the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tail;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head != NULL)
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = node;
	}
	else
		*head = node;
	return (*head);
}
