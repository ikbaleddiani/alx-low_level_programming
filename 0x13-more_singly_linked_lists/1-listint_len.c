#include "lists.h"

/**
 * listint_len -  a function that returns the number of elements
 *  in a linked listint_t list.
 *  @h: pointer to first node
 *
 *  Retuen: size of list
 */

size_t listint_len(const listint_t *h);
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
