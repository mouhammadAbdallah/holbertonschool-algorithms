#include "lists.h"

/**
 * sum_listint - sum_listint
 * @head: head
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	do {
		s += head->n;
		head = head->next;
	} while (head != NULL);
	return (s);
}
