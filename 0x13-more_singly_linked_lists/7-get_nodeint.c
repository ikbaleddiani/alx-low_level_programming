#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: index
 *
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
        {
    while (head != NULL && index > 0)
    {
        head = head->next;
        index--;
    }
    return head;
}	
