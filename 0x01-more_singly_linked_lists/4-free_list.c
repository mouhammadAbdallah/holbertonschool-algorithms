#include "lists.h"

/**
 * free_list - free_list
 * @head: head
 *
 * void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
