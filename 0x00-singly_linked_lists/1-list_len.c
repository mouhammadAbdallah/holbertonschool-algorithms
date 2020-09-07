#include "lists.h"

/**
 * list_len - list_len
 * @h: list
 *
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
