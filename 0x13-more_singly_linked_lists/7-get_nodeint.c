#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: a pointer
 * @index: index of node
 *
 * Return: to index otherwise NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *y;

	if (head == NULL)
		return (NULL);

	if (!index)
		return (head);
	y = head;
	x = 0;
	while (y->next != NULL)
	{
		y = y->next;
		x++;
		if (x == index)
			return (y);
	}
	return (NULL);
}
