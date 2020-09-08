#include "lists.h"

/**
 * free_listint - free_listint
 * @head: head
 *
 * void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
