#include "lists.h"

/**
 * sum_dlistint - sum_dlistint
 * @head: head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	do
	{
		s += head->n;
		head = head->next;
	} while (head != NULL);
	return (s);
}
