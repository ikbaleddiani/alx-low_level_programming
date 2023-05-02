#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that frees a listint_t list.
 * @*head: pointer
 *
 * Return: to popped value
 */

int pop_listint(listint_t **head);
{
        listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	
	node = (*head)->next;
	n = (*head)->n;
	free(node);
	*head = node
	return (n);
}	
