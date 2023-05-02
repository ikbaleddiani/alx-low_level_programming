#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning
 *  of a listint_t list.
 *  @*head: a pointer
 *  @n: new valeur
 *
 *  Return: to the pointer
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node-> = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (nex_node);
}


