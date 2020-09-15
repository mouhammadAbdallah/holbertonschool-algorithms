#include "lists.h"

/**
 * free_dlistint - free the double list
 * @head: head
 *
 * void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
