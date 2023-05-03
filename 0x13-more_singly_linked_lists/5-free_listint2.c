#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: address of pointer
 *
 * Return: (void)
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;

	x = *head;
	while (x != NULL)
	{
		x = x->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
