#include "lists.h"

/**
 * free_listint2 - free_listint2
 * @head: head
 *
 * void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
}
