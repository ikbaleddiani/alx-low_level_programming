#include "lists.h"

/**
 * get_dnodeint_at_index - retrun node at a given index in doubly linked list
 * @head: The head of the dlistint_t list.
 * @index: index of node
 *
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr)
	{
		if (index == count)
			return (ptr);
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
