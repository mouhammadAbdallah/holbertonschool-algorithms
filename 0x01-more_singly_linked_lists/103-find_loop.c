#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - Checks for infinite loops.
 * @head: Linked list.
 * Return: Address where infinite loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p, *fast_p;

	if (head == NULL || head->next == NULL)
		return (NULL);
	slow_p = head->next;
	fast_p = (head->next)->next;
	while (fast_p)
	{
		if (slow_p == fast_p)
		{
			slow_p = head;
			while (slow_p != fast_p)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			return (slow_p);
		}
		slow_p = slow_p->next;
		fast_p = (fast_p->next)->next;
	}

	return (NULL);
}
