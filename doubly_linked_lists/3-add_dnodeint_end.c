#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint_end - the function create a new tail of a doubly linked list
 *
 * @head: the head of the doubly linked list
 * @n: the int of the new tail
 *
 * Return: the new tail of the doubly linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (new_tail == NULL)
	{
		return (NULL);
	}

	new_tail->n = n;
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
		return (*head);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_tail;
	new_tail->prev = tmp;
	return (*head);
}
