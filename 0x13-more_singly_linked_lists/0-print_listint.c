#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listunt - a function that prints all the elements
 *  of a listint_t list.
 *  @h: ther pointer
 *
 *  Return: size_t
 */

size_t print_listint(const listint_t *h);
{
	size_t d = 0;

	while (h)
	{
		h = h->next;
		d++;
	}
	return (d);
}		
