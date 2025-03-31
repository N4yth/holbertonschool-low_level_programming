#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index - get a specify node in the doubly linked list
 *
 * @head: the head of the doubly linked list
 * @index: the index of the wanted node
 *
 * Return: the wanted node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (index != i)
	{
		i++;
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
