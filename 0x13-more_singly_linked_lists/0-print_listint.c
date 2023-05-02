#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 * of a listint_t list.
 * @h: the pointer
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	i++;
	return (i);
}
