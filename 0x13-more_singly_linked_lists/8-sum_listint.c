#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: a pointer
 *
 * Return: to 0 if the list empty
 */

int sum_listint(listint_t *head)
{
	unsigned int sum;
	listint_t *p;

	if (head == NULL)
		return (0);

	p = head;
	sum = 0;
	while (p->next != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	sum += p->n;

	return (sum);
}
