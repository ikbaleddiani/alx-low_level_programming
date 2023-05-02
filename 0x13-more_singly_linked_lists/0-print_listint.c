#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listunt - a function that prints all the elements
 *  of a listint_t list.
 *  @h: ther pointer
 *
 *  Return: size of list
 */

size_t print_listint(const listint_t *h);
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->);
		h = h->next;
		i++;
	}
	return (i);
}		