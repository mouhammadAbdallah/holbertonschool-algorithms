#include "lists.h"

/**
 * free_list - free_list
 * @head: head
 *
 * void
 */
void free_list(listint_t **head)
{
	if (*head == NULL)
		return;
	free_list(&((*head)->next));
	free(*head);
	*head = NULL;
}

/**
 * free_listint2 - free_listint2
 * @head: head
 *
 * void
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	free_list(head);
	*head = NULL;
}
