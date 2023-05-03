#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer
 *
 * Return: to popped value
 */

int pop_listint(listint_t **head)
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
