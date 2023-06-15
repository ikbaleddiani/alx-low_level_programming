#include "lists.h"
/**
 * listint_len -  a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: pointer to first node
 *
 * Return: to nomber of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
