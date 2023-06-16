#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
