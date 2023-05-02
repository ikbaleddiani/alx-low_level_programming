#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - a function that prints all the elements
 * of a listint_t list.
 * @h: the header
 *
 * Return: num of node
 */

size_t print_listint(const listint_t *h)
{
	int num;
	const listint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	num = 0;
	while (ptr->next != NULL)
	{
		printf("%d\n", ptr->n);
		num++;
		ptr = ptr->next;
	}
	num++;
	printf("%d\n", ptr->n);
	return (num);

}
