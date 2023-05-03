#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: a pointer
 * @n: new valeur
 *
 * Return: to the pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
