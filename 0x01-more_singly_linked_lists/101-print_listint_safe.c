#include "lists.h"

/**
 * floyds_cycle - checks for infinite loops.
 * @head: Linked list.
 * Return: Loop length.
 */
int floyds_cycle(const listint_t *head)
{
	const listint_t *slow_p, *fast_p;
	int nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow_p = head->next;
	fast_p = (head->next)->next;
	while (fast_p)
	{
		if (slow_p == fast_p)
		{
			slow_p = head;
			for (; slow_p != fast_p; nodes++)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			slow_p = slow_p->next;
			for (; slow_p != fast_p; nodes++)
				slow_p = slow_p->next;
			return (nodes);
		}
		slow_p = slow_p->next;
		fast_p = (fast_p->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - Prints all elements in list.
 * @head: Linked list.
 * Return: Number of nodes in list.
 */
int print_listint_safe(const listint_t *head)
{
	int nodes = floyds_cycle(head), aux;

	if (nodes == 0)
	{
		for (nodes = 0; head; nodes++)
		{
			printf("[%p] %i\n", (void *)head, head->n);
			head = head->next;
		}
		return (nodes);
	}
	for (aux = 0; aux < nodes; aux++)
	{
		printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
	}
	printf("-> [%p] %i\n", (void *)head, head->n);

	return (nodes);
}
