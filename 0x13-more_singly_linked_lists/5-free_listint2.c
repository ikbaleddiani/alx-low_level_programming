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
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (head)
	{
		temp = node
		node = head->next;
		free(temp);
	}
	*head = NULL;
}
