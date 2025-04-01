#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "1-dlistint_len.c"

/**
 * delete_dnodeint_at_index - function that delete a node in a doubly linked
 * list
 *
 * @head: the head of the doubly linked list
 * @index: the coordinate to delete the  node
 *
 * Return: 1 if it work -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int constan_index = index;

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
		*head = NULL;
		return (1);
	}
	if (current->next == NULL)
		current->prev->next = NULL;
	else
		current->next->prev = current->prev;
	if (current->prev == NULL)
	{
		current->next->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
	}
	if (constan_index == 0)
	{
		*head = (*head)->next;
	}
	free(current);
	return (1);
}
