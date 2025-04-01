#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - add a new node the the choosen coordinate
 *
 * @h: the head of the doubly linked list
 * @idx: the coordinate to put the new node
 * @n: the int of the new node
 *
 * Return: the new node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL || dlistint_len(*head) < index)
		return (-1);
	if (index != 0)
	{
		while (index > 0)
		{
			current = current->next;
			index--;
		}
	}
	if (current->next == NULL && current->prev == NULL)
	{
		free(current);
		return (1);
	}
	if (current->next == NULL)
	{
		current->prev->next = NULL;
	}
	else
	{
		current->next->prev = current->prev;
	}
	if (current->prev == NULL)
	{
		current->next->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
	}
	if (index == 0)
	{
		*head = (*head)->next;
	}
	free(current);
	return (1);
}
