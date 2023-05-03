#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_t *insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: the pointer
 * @n: data of type integer
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *p, *t;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (p);
	}

	t = *head;
	count = 0;
	while (t->next != NULL)
	{
		if (count == (idx - 1))
		{
			p->next = t->next;
			t->next = p;
			return (p);
		}
		t = t->next;
		count++;
	}
	if (count == (idx - 1))
	{
		p->next = NULL;
		t->next = p;
		return (p);
	}
	return (NULL);

