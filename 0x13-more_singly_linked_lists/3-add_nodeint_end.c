#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: a pointer
 * @n: new valeur
 *
 * Return: to the pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *y;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	x->next = NULL;
	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	y = *head;
	while (y->next != NULL)
	{
		y = y->next;
	}
	y->next = x;
	return (x);
}
